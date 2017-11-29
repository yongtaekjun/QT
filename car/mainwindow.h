#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_up_pressed();

    void on_down_pressed();

    void on_left_pressed();

    void on_right_pressed();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
