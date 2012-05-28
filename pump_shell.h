#ifndef PUMP_SHELL_H
#define PUMP_SHELL_H

#include <QMainWindow>

namespace Ui {
class pump_shell;
}

class pump_shell : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit pump_shell(QWidget *parent = 0);
    ~pump_shell();
public slots:
    void b_start();
    void b_stop();
protected:
    void changeEvent(QEvent *);
private:
    Ui::pump_shell *ui;
};

#endif // PUMP_SHELL_H
