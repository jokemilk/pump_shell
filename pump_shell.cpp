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

#include <QDirectPainter>

static int fb;

pump_shell::pump_shell(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::pump_shell)
{
    ui->setupUi(this);
    int myW=QDirectPainter::screenWidth();
    int myH=QDirectPainter::screenWidth();
    this->resize(myW,myH);
    connect(ui->START,SIGNAL(clicked()),this,SLOT(b_start()));
    connect(ui->STOP,SIGNAL(clicked()),this,SLOT(b_stop()));
    fb = open("/dev/pump", O_RDWR, S_IRUSR | S_IWUSR);
    if(fb<0)
    {
        printf("device open failure\n");
    }
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
