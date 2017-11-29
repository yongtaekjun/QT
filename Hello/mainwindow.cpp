#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    std::cout << "Hellow";
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_click_me_clicked()
{
    ui->txt_message->append("Hello QT");
}
