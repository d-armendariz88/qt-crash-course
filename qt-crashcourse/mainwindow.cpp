#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QRegularExpression"
#include "QRegularExpressionValidator"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->first_number->setValidator(new QRegularExpressionValidator(QRegularExpression("[0-9]*")));
    ui->second_number->setValidator(new QRegularExpressionValidator(QRegularExpression("[0-9]*")));
}

MainWindow::~MainWindow()
{
    delete ui;
}

int firstNum, secondNum, result;

void MainWindow::on_add_button_clicked()
{
    firstNum = ui->first_number->text().toInt();
    secondNum = ui->second_number->text().toInt();
    result = firstNum + secondNum;
    ui->results_value->setText(QString::number(result));
}


void MainWindow::on_minus_button_clicked()
{
    firstNum = ui->first_number->text().toInt();
    secondNum = ui->second_number->text().toInt();
    result = firstNum - secondNum;
    ui->results_value->setText(QString::number(result));
}


void MainWindow::on_mult_button_clicked()
{
    firstNum = ui->first_number->text().toInt();
    secondNum = ui->second_number->text().toInt();
    result = firstNum * secondNum;
    ui->results_value->setText(QString::number(result));
}


void MainWindow::on_div_button_clicked()
{
    firstNum = ui->first_number->text().toInt();
    secondNum = ui->second_number->text().toInt();
    result = firstNum / secondNum;
    ui->results_value->setText(QString::number(result));
}

