#ifndef SETTING_H
#define SETTING_H

#include <QMainWindow>

namespace Ui {
class setting;
}

class setting : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit setting(QWidget *parent = 0);
    ~setting();
    

private slots:
    void on_p1000_clicked();

    void on_m1000_clicked();

    void on_p100_clicked();

    void on_p10_clicked();

    void on_p1_clicked();

    void on_m10_clicked();

    void on_m1_clicked();

    void on_p01_clicked();

    void on_m100_clicked();

    void on_m01_clicked();

    void on_back_clicked();

private:
    Ui::setting *ui;
};

#endif // SETTING_H
