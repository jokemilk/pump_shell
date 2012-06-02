#-------------------------------------------------
#
# Project created by QtCreator 2012-04-27T10:55:23
#
#-------------------------------------------------

QT       += core gui

TARGET = pump_shell
TEMPLATE = app


SOURCES += main.cpp\
        pump_shell.cpp \
    global.cpp \
    setting.cpp

HEADERS  += pump_shell.h \
    pump_command.h \
    global.h \
    setting.h

FORMS    += pump_shell.ui \
    setting.ui

contains(MEEGO_EDITION,harmattan) {
    target.path = /opt/pump_shell/bin
    INSTALLS += target
}
