/********************************************************************************
** Form generated from reading UI file 'setting.ui'
**
** Created: Sun Jun 3 18:17:30 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTING_H
#define UI_SETTING_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_setting
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *volume;
    QLineEdit *heart_beat;
    QLineEdit *ratio;
    QPushButton *p1000;
    QPushButton *p100;
    QPushButton *m1000;
    QPushButton *m100;
    QPushButton *m1;
    QPushButton *m10;
    QPushButton *p1;
    QPushButton *p10;
    QPushButton *m01;
    QPushButton *p01;
    QPushButton *back;

    void setupUi(QMainWindow *setting)
    {
        if (setting->objectName().isEmpty())
            setting->setObjectName(QString::fromUtf8("setting"));
        setting->resize(800, 480);
        setting->setCursor(QCursor(Qt::OpenHandCursor));
        centralwidget = new QWidget(setting);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 90, 120, 40));
        QFont font;
        font.setPointSize(22);
        label->setFont(font);
        label->setCursor(QCursor(Qt::OpenHandCursor));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(330, 90, 120, 40));
        label_2->setFont(font);
        label_2->setCursor(QCursor(Qt::OpenHandCursor));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(510, 90, 120, 40));
        label_3->setFont(font);
        label_3->setCursor(QCursor(Qt::OpenHandCursor));
        volume = new QLineEdit(centralwidget);
        volume->setObjectName(QString::fromUtf8("volume"));
        volume->setGeometry(QRect(90, 150, 160, 90));
        QFont font1;
        font1.setPointSize(28);
        volume->setFont(font1);
        volume->setCursor(QCursor(Qt::OpenHandCursor));
        volume->setAlignment(Qt::AlignCenter);
        volume->setReadOnly(true);
        heart_beat = new QLineEdit(centralwidget);
        heart_beat->setObjectName(QString::fromUtf8("heart_beat"));
        heart_beat->setGeometry(QRect(290, 150, 160, 90));
        heart_beat->setFont(font1);
        heart_beat->setCursor(QCursor(Qt::OpenHandCursor));
        heart_beat->setAlignment(Qt::AlignCenter);
        heart_beat->setReadOnly(true);
        ratio = new QLineEdit(centralwidget);
        ratio->setObjectName(QString::fromUtf8("ratio"));
        ratio->setGeometry(QRect(480, 150, 160, 90));
        ratio->setFont(font1);
        ratio->setCursor(QCursor(Qt::OpenHandCursor));
        ratio->setAlignment(Qt::AlignCenter);
        ratio->setReadOnly(true);
        p1000 = new QPushButton(centralwidget);
        p1000->setObjectName(QString::fromUtf8("p1000"));
        p1000->setGeometry(QRect(90, 260, 71, 51));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        p1000->setFont(font2);
        p1000->setCursor(QCursor(Qt::OpenHandCursor));
        p100 = new QPushButton(centralwidget);
        p100->setObjectName(QString::fromUtf8("p100"));
        p100->setGeometry(QRect(180, 260, 71, 51));
        p100->setFont(font2);
        p100->setCursor(QCursor(Qt::OpenHandCursor));
        m1000 = new QPushButton(centralwidget);
        m1000->setObjectName(QString::fromUtf8("m1000"));
        m1000->setGeometry(QRect(90, 330, 71, 51));
        m1000->setFont(font2);
        m1000->setCursor(QCursor(Qt::OpenHandCursor));
        m100 = new QPushButton(centralwidget);
        m100->setObjectName(QString::fromUtf8("m100"));
        m100->setGeometry(QRect(180, 330, 71, 51));
        m100->setFont(font2);
        m100->setCursor(QCursor(Qt::OpenHandCursor));
        m1 = new QPushButton(centralwidget);
        m1->setObjectName(QString::fromUtf8("m1"));
        m1->setGeometry(QRect(380, 330, 71, 51));
        m1->setFont(font2);
        m1->setCursor(QCursor(Qt::OpenHandCursor));
        m10 = new QPushButton(centralwidget);
        m10->setObjectName(QString::fromUtf8("m10"));
        m10->setGeometry(QRect(290, 330, 71, 51));
        m10->setFont(font2);
        m10->setCursor(QCursor(Qt::OpenHandCursor));
        p1 = new QPushButton(centralwidget);
        p1->setObjectName(QString::fromUtf8("p1"));
        p1->setGeometry(QRect(380, 260, 71, 51));
        p1->setFont(font2);
        p1->setCursor(QCursor(Qt::OpenHandCursor));
        p10 = new QPushButton(centralwidget);
        p10->setObjectName(QString::fromUtf8("p10"));
        p10->setGeometry(QRect(290, 260, 71, 51));
        p10->setFont(font2);
        p10->setCursor(QCursor(Qt::OpenHandCursor));
        m01 = new QPushButton(centralwidget);
        m01->setObjectName(QString::fromUtf8("m01"));
        m01->setGeometry(QRect(530, 330, 71, 51));
        m01->setFont(font2);
        m01->setCursor(QCursor(Qt::OpenHandCursor));
        p01 = new QPushButton(centralwidget);
        p01->setObjectName(QString::fromUtf8("p01"));
        p01->setGeometry(QRect(530, 260, 71, 51));
        p01->setFont(font2);
        p01->setCursor(QCursor(Qt::OpenHandCursor));
        back = new QPushButton(centralwidget);
        back->setObjectName(QString::fromUtf8("back"));
        back->setGeometry(QRect(650, 280, 111, 71));
        QFont font3;
        font3.setPointSize(18);
        back->setFont(font3);
        back->setCursor(QCursor(Qt::OpenHandCursor));
        setting->setCentralWidget(centralwidget);

        retranslateUi(setting);

        QMetaObject::connectSlotsByName(setting);
    } // setupUi

    void retranslateUi(QMainWindow *setting)
    {
        setting->setWindowTitle(QApplication::translate("setting", "Setting", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("setting", "\345\216\213\347\274\251\351\207\217", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("setting", "\345\277\203\347\216\207", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("setting", "\345\216\213\347\274\251\346\257\224", 0, QApplication::UnicodeUTF8));
        volume->setText(QString());
        heart_beat->setText(QString());
        ratio->setText(QString());
        p1000->setText(QApplication::translate("setting", "+1000", 0, QApplication::UnicodeUTF8));
        p100->setText(QApplication::translate("setting", "+100", 0, QApplication::UnicodeUTF8));
        m1000->setText(QApplication::translate("setting", "-1000", 0, QApplication::UnicodeUTF8));
        m100->setText(QApplication::translate("setting", "-100", 0, QApplication::UnicodeUTF8));
        m1->setText(QApplication::translate("setting", "-1", 0, QApplication::UnicodeUTF8));
        m10->setText(QApplication::translate("setting", "-10", 0, QApplication::UnicodeUTF8));
        p1->setText(QApplication::translate("setting", "+1", 0, QApplication::UnicodeUTF8));
        p10->setText(QApplication::translate("setting", "+10", 0, QApplication::UnicodeUTF8));
        m01->setText(QApplication::translate("setting", "-0.1", 0, QApplication::UnicodeUTF8));
        p01->setText(QApplication::translate("setting", "+0.1", 0, QApplication::UnicodeUTF8));
        back->setText(QApplication::translate("setting", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class setting: public Ui_setting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTING_H
