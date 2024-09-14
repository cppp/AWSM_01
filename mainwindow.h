#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "calulator.h" // Include your Calculator class

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_addButton_clicked();
    void on_subtractButton_clicked();
    void on_multiplyButton_clicked();
    void on_divideButton_clicked();

private:
    Ui::MainWindow *ui;
    Calculator calculator; // Instance of the Calculator class
};

#endif // MAINWINDOW_H
