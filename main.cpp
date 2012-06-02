#include <QtGui/QApplication>
#include "pump_shell.h"
#include "setting.h"
#include "global.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    pump_shell w;
    ppump=&w;
    w.show();
    
    return a.exec();
}
