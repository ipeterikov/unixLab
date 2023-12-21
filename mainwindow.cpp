#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_multiplyButton_clicked()
{
    double number1 = ui->lineEdit->text().toDouble();
    double number2 = ui->lineEdit_2->text().toDouble();
    double multiplyNum = number1*number2;
    ui->result->setText(QString::number(multiplyNum));
}

void MainWindow::on_clearButton_clicked()
{
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    ui->result->clear();
}

