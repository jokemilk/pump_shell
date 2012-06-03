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

void pump_shell::b_start()
{
    ioctl(fb,PUMP_START_T2);
}

void pump_shell::b_stop()
{
    ioctl(fb,PUMP_STOP_T2);
}

void pump_shell::on_START_clicked()
{

}

void pump_shell::on_STOP_clicked()
{

}

setting *s;
void pump_shell::on_SET_clicked()
{
//    setting *s = new setting;
    if(s==NULL)
        s=new setting;
    s->show();
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
