#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "dialog.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Biquad Filter");  // изменяет название окна сверху
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    ui->pushButton_2->setText("Butt pushed");
    Dialog window;
    window.setModal(true);
    window.exec();
}


void MainWindow::on_pushButton_2_clicked()
{
    ui->pushButton_2->setText("Butt pushed");
    Dialog window;
    window.setModal(true);
    window.exec();
}

