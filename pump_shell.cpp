#include "pump_shell.h"
#include "ui_pump_shell.h"
#include "pump_command.h"
#include "global.h"

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <sys/ioctl.h>
#include <stdio.h>
#include <unistd.h>
#include <global.h>

#include <QDirectPainter>

static int fb;

int default_globle_values(void)
{
    int ret = 0;
    thero.compress_ratio=1.0;
    thero.heart_beat=70;
    thero.volume=5000;
    cnt=0;
    return ret;
}

pump_shell::pump_shell(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::pump_shell)
{
    ui->setupUi(this);
//    int myW=QDirectPainter::screenWidth();
//    int myH=QDirectPainter::screenWidth();
//    this->resize(myW,myH);
    this->setWindowFlags(Qt::FramelessWindowHint);
    connect(ui->START,SIGNAL(clicked()),this,SLOT(b_start()));
    connect(ui->STOP,SIGNAL(clicked()),this,SLOT(b_stop()));
    fb = open("/dev/pump", O_RDWR, S_IRUSR | S_IWUSR);
    if(fb<0)
    {
        printf("device open failure\n");
    }
    default_globle_values();
    this->ui->VOLUME->setText(temp.setNum(thero.volume,10));
    this->ui->HEATBEAT->setText(temp.setNum(thero.heart_beat,10));
    sprintf(tempch,"%.1f",thero.compress_ratio);
    this->ui->COMP_RATIO->setText(QString(tempch));
    this->ui->CNT->setText(temp.setNum(cnt,10));
    this->running=FALSE;
}

pump_shell::~pump_shell()
{
    ::close(fb);
    delete ui;
}

void pump_shell::changeEvent(QEvent *e)
{
    QMainWindow::changeEvent(e);
    switch(e->type())
    {
        case QEvent::LanguageChange:ui->retranslateUi(this);break;
        default:break;
    }
}


void pump_shell::on_START_clicked()
{
    if(!this->running)
    {
        double temp=thero.heart_beat*(1+thero.compress_ratio);
        temp = 60./temp;
        //计算参数
        thero.time_push_acc=temp*2500;
        thero.time_push_avg=temp*30000;
        temp=60./thero.heart_beat-temp;
        thero.time_pull_acc=temp*2500;
        thero.time_pull_avg=temp*30000;
        temp=(1+thero.compress_ratio)*thero.volume/4.;
        thero.pwm_rate[0]=(uint)temp;
        temp=(1+thero.compress_ratio)/(4.*thero.compress_ratio)*thero.volume;
        thero.pwm_rate[1]=(uint)temp;
        //配置参数
        ioctl(fb,PUMP_SET_PUSH_ACC,thero.time_push_acc);
        ioctl(fb,PUMP_SET_PUSH_AVG,thero.time_push_avg);
        ioctl(fb,PUMP_SET_PULL_ACC,thero.time_pull_acc);
        ioctl(fb,PUMP_SET_PULL_ACC,thero.time_pull_avg);
        ioctl(fb,PUMP_SET_PWM0,thero.pwm_rate[0]);
        ioctl(fb,PUMP_SET_PWM1,thero.pwm_rate[1]);
        //开定时器
        ioctl(fb,PUMP_START_T2);
        this->running=TRUE;
    }
}

void pump_shell::on_STOP_clicked()
{
    if(this->running)
    {
        ioctl(fb,PUMP_STOP_T2);
        this->running=FALSE;
    }
}

setting *s;
void pump_shell::on_SET_clicked()
{
//    setting *s = new setting;
    if(!this->running)
    {
        if(s==NULL)
            s=new setting;
        s->show();
    }
}

void pump_shell::on_PRESSURE_clicked()
{

}

void pump_shell::update()
{
    this->ui->VOLUME->setText(temp.setNum(thero.volume,10));
    this->ui->HEATBEAT->setText(temp.setNum(thero.heart_beat,10));
    sprintf(tempch,"%.1f",thero.compress_ratio);
    this->ui->COMP_RATIO->setText(QString(tempch));
}
