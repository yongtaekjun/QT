#include "mainwindow.h"
#include "ui_mainwindow.h"

unsigned char speed = 0; // will be changed speed up and down button , range (0-256)
unsigned char angle = 90; // will be changed with left adn right button, range (0-180)

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_up_pressed()
{
    if ( speed > 256 ) return;
    speed += 2;
    //ui->speed += 2;
    ui->speed->display(speed);
}

void MainWindow::on_down_pressed()
{
    if ( speed < 2) return;
    speed -= 2;
    ui->speed->display(speed);

}

void MainWindow::on_left_pressed()
{
    if ( angle < 2) return;
    angle -=2;
    QString tt = angle;
    ui->angle->setText(tt);

}

void MainWindow::on_right_pressed()
{
    if ( angle < 178) return;
    angle +=2;
    QString tt = angle;
    ui->angle->setText(tt);

}
