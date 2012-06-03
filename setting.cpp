#include "setting.h"
#include "ui_setting.h"
#include "global.h"
#include "stdio.h"
#include "string.h"
#include <QDirectPainter>

setting::setting(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::setting)
{
    ui->setupUi(this);
//    int myW=QDirectPainter::screenWidth();
//    int myH=QDirectPainter::screenWidth();
//    this->resize(myW,myH);
    this->setWindowFlags(Qt::FramelessWindowHint);
    this->ui->volume->setText(temp.setNum(thero.volume,10));
    this->ui->heart_beat->setText(temp.setNum(thero.heart_beat,10));
    sprintf(tempch,"%.1f",thero.compress_ratio);
    this->ui->ratio->setText(QString(tempch));
}

setting::~setting()
{
    delete ui;
}


void setting::on_p1000_clicked()
{
    if(thero.volume<=MAX_VOLUME-1000)
        thero.volume+=1000;
    this->ui->volume->setText(temp.setNum(thero.volume,10));
}

void setting::on_m1000_clicked()
{
    if(thero.volume>=MIN_VOLUME+1000)
        thero.volume-=1000;
    this->ui->volume->setText(temp.setNum(thero.volume,10));
}

void setting::on_p100_clicked()
{
    if(thero.volume<=MAX_VOLUME-100)
        thero.volume+=100;
    this->ui->volume->setText(temp.setNum(thero.volume,10));
}

void setting::on_p10_clicked()
{
    if(thero.heart_beat<=MAX_BEAT-10)
        thero.heart_beat+=10;
    this->ui->heart_beat->setText(temp.setNum(thero.heart_beat,10));
}

void setting::on_p1_clicked()
{
    if(thero.heart_beat<=MAX_BEAT-1)
        thero.heart_beat+=1;
    this->ui->heart_beat->setText(temp.setNum(thero.heart_beat,10));
}

void setting::on_m10_clicked()
{
    if(thero.heart_beat>=MIN_BEAT+10)
        thero.heart_beat-=10;
    this->ui->heart_beat->setText(temp.setNum(thero.heart_beat,10));
}

void setting::on_m1_clicked()
{
    if(thero.heart_beat>=MIN_BEAT+1)
        thero.heart_beat-=1;
    this->ui->heart_beat->setText(temp.setNum(thero.heart_beat,10));
}

void setting::on_p01_clicked()
{
    if(thero.compress_ratio<=MAX_C_RATIO-0.1)
        thero.compress_ratio+=0.1;
    sprintf(tempch,"%.1f",thero.compress_ratio);
    this->ui->ratio->setText(QString(tempch));
}

void setting::on_m100_clicked()
{
    if(thero.volume>=MIN_VOLUME+100)
        thero.volume-=100;
    this->ui->volume->setText(temp.setNum(thero.volume,10));
}

void setting::on_m01_clicked()
{
    if(thero.compress_ratio>=MIN_C_RATIO+0.1)
        thero.compress_ratio-=0.1;
    sprintf(tempch,"%.1f",thero.compress_ratio);
    this->ui->ratio->setText(QString(tempch));
}

void setting::on_back_clicked()
{
//    ppump->ui->VOLUME->setText(temp.setNum(thero.volume,10));
//    ppump->ui->HEATBEAT->setText(temp.setNum(thero.heart_beat,10));
//    sprintf(tempch,"%.1f",thero.compress_ratio);
//    ppump->ui->COMP_RATIO->setText(QString(tempch));
    ppump->update();
//    this->~setting();
    this->hide();
}
