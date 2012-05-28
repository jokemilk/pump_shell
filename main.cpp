#include <QtGui/QApplication>
#include "pump_shell.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    pump_shell w;
    w.show();
    
    return a.exec();
}
