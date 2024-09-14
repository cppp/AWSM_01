#include "mainwindow.h"
#include "ui_mainwindow.h"
// #include "calulator.cpp"
#include <QMessageBox>

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

void MainWindow::on_addButton_clicked()
{
    int num1 = ui->num1LineEdit->text().toInt();
    int num2 = ui->num2LineEdit->text().toInt();
    int result = calculator.add(num1, num2);
    ui->resultLabel->setText(QString::number(result));
}

void MainWindow::on_subtractButton_clicked()
{
    int num1 = ui->num1LineEdit->text().toInt();
    int num2 = ui->num2LineEdit->text().toInt();
    int result = calculator.subtract(num1, num2);
    ui->resultLabel->setText(QString::number(result));
}

void MainWindow::on_multiplyButton_clicked()
{
    int num1 = ui->num1LineEdit->text().toInt();
    int num2 = ui->num2LineEdit->text().toInt();
    int result = calculator.multiply(num1, num2);
    ui->resultLabel->setText(QString::number(result));
}

void MainWindow::on_divideButton_clicked()
{
    int num1 = ui->num1LineEdit->text().toInt();
    int num2 = ui->num2LineEdit->text().toInt();
    try {
        double result = calculator.divide(num1, num2);
        ui->resultLabel->setText(QString::number(result));
    } catch (const std::invalid_argument& e) {
        QMessageBox::warning(this, "Error", "Division by zero is not allowed");
    }
}
