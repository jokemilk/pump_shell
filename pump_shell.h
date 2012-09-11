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
    void update();
    ~pump_shell();
protected:
    void changeEvent(QEvent *);
private slots:
    void on_START_clicked();

    void on_STOP_clicked();

    void on_SET_clicked();

    void on_PRESSURE_clicked();

private:
    Ui::pump_shell *ui;
    bool running;
};

#endif // PUMP_SHELL_H
