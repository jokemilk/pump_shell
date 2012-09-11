/********************************************************************************
** Form generated from reading UI file 'pump_shell.ui'
**
** Created: Sun Jun 3 18:17:30 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PUMP_SHELL_H
#define UI_PUMP_SHELL_H

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

class Ui_pump_shell
{
public:
    QWidget *centralWidget;
    QPushButton *START;
    QPushButton *STOP;
    QLineEdit *HEATBEAT;
    QLineEdit *CNT;
    QLineEdit *COMP_RATIO;
    QLineEdit *VOLUME;
    QPushButton *SET;
    QPushButton *PRESSURE;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QMainWindow *pump_shell)
    {
        if (pump_shell->objectName().isEmpty())
            pump_shell->setObjectName(QString::fromUtf8("pump_shell"));
        pump_shell->resize(800, 480);
        pump_shell->setCursor(QCursor(Qt::OpenHandCursor));
        centralWidget = new QWidget(pump_shell);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        START = new QPushButton(centralWidget);
        START->setObjectName(QString::fromUtf8("START"));
        START->setGeometry(QRect(70, 310, 120, 80));
        QFont font;
        font.setPointSize(18);
        START->setFont(font);
        START->setCursor(QCursor(Qt::OpenHandCursor));
        STOP = new QPushButton(centralWidget);
        STOP->setObjectName(QString::fromUtf8("STOP"));
        STOP->setGeometry(QRect(250, 310, 120, 80));
        STOP->setFont(font);
        STOP->setCursor(QCursor(Qt::OpenHandCursor));
        HEATBEAT = new QLineEdit(centralWidget);
        HEATBEAT->setObjectName(QString::fromUtf8("HEATBEAT"));
        HEATBEAT->setGeometry(QRect(45, 170, 160, 90));
        QFont font1;
        font1.setPointSize(28);
        HEATBEAT->setFont(font1);
        HEATBEAT->setCursor(QCursor(Qt::BlankCursor));
        HEATBEAT->setAlignment(Qt::AlignCenter);
        HEATBEAT->setReadOnly(true);
        CNT = new QLineEdit(centralWidget);
        CNT->setObjectName(QString::fromUtf8("CNT"));
        CNT->setGeometry(QRect(225, 170, 160, 90));
        CNT->setFont(font1);
        CNT->setCursor(QCursor(Qt::BlankCursor));
        CNT->setAlignment(Qt::AlignCenter);
        CNT->setReadOnly(true);
        COMP_RATIO = new QLineEdit(centralWidget);
        COMP_RATIO->setObjectName(QString::fromUtf8("COMP_RATIO"));
        COMP_RATIO->setGeometry(QRect(405, 170, 160, 90));
        COMP_RATIO->setFont(font1);
        COMP_RATIO->setCursor(QCursor(Qt::BlankCursor));
        COMP_RATIO->setAlignment(Qt::AlignCenter);
        COMP_RATIO->setReadOnly(true);
        VOLUME = new QLineEdit(centralWidget);
        VOLUME->setObjectName(QString::fromUtf8("VOLUME"));
        VOLUME->setGeometry(QRect(585, 170, 160, 90));
        VOLUME->setFont(font1);
        VOLUME->setCursor(QCursor(Qt::BlankCursor));
        VOLUME->setAlignment(Qt::AlignCenter);
        VOLUME->setReadOnly(true);
        SET = new QPushButton(centralWidget);
        SET->setObjectName(QString::fromUtf8("SET"));
        SET->setGeometry(QRect(430, 310, 120, 80));
        SET->setFont(font);
        SET->setCursor(QCursor(Qt::OpenHandCursor));
        PRESSURE = new QPushButton(centralWidget);
        PRESSURE->setObjectName(QString::fromUtf8("PRESSURE"));
        PRESSURE->setGeometry(QRect(610, 310, 120, 80));
        PRESSURE->setFont(font);
        PRESSURE->setCursor(QCursor(Qt::OpenHandCursor));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(95, 100, 90, 40));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\346\226\207\346\263\211\351\251\277\345\276\256\347\261\263\351\273\221"));
        font2.setPointSize(22);
        label->setFont(font2);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(275, 100, 90, 40));
        label_2->setFont(font2);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(440, 100, 120, 40));
        label_3->setFont(font2);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(610, 100, 120, 40));
        label_4->setFont(font2);
        pump_shell->setCentralWidget(centralWidget);

        retranslateUi(pump_shell);

        QMetaObject::connectSlotsByName(pump_shell);
    } // setupUi

    void retranslateUi(QMainWindow *pump_shell)
    {
        pump_shell->setWindowTitle(QApplication::translate("pump_shell", "pump_shell", 0, QApplication::UnicodeUTF8));
        START->setText(QApplication::translate("pump_shell", "\345\274\200\345\247\213", 0, QApplication::UnicodeUTF8));
        STOP->setText(QApplication::translate("pump_shell", "\345\201\234\346\255\242", 0, QApplication::UnicodeUTF8));
        SET->setText(QApplication::translate("pump_shell", "\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        PRESSURE->setText(QApplication::translate("pump_shell", "\345\216\213\345\212\233", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("pump_shell", "\345\277\203\347\216\207", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("pump_shell", "\350\256\241\346\225\260", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("pump_shell", "\345\216\213\347\274\251\346\257\224", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("pump_shell", "\345\216\213\347\274\251\347\216\207", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class pump_shell: public Ui_pump_shell {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PUMP_SHELL_H
