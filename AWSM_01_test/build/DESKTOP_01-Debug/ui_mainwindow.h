/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *num1LineEdit;
    QLineEdit *num2LineEdit;
    QPushButton *addButton;
    QPushButton *subtractButton;
    QPushButton *divideButton;
    QPushButton *multiplyButton;
    QLabel *resultLabel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        num1LineEdit = new QLineEdit(centralwidget);
        num1LineEdit->setObjectName(QString::fromUtf8("num1LineEdit"));
        num1LineEdit->setGeometry(QRect(30, 10, 113, 22));
        num2LineEdit = new QLineEdit(centralwidget);
        num2LineEdit->setObjectName(QString::fromUtf8("num2LineEdit"));
        num2LineEdit->setGeometry(QRect(30, 40, 113, 22));
        addButton = new QPushButton(centralwidget);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        addButton->setGeometry(QRect(30, 70, 21, 24));
        subtractButton = new QPushButton(centralwidget);
        subtractButton->setObjectName(QString::fromUtf8("subtractButton"));
        subtractButton->setGeometry(QRect(60, 70, 21, 24));
        divideButton = new QPushButton(centralwidget);
        divideButton->setObjectName(QString::fromUtf8("divideButton"));
        divideButton->setGeometry(QRect(90, 70, 21, 24));
        multiplyButton = new QPushButton(centralwidget);
        multiplyButton->setObjectName(QString::fromUtf8("multiplyButton"));
        multiplyButton->setGeometry(QRect(120, 70, 21, 24));
        resultLabel = new QLabel(centralwidget);
        resultLabel->setObjectName(QString::fromUtf8("resultLabel"));
        resultLabel->setGeometry(QRect(30, 110, 111, 16));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        addButton->setText(QApplication::translate("MainWindow", "+", nullptr));
        subtractButton->setText(QApplication::translate("MainWindow", "-", nullptr));
        divideButton->setText(QApplication::translate("MainWindow", "/", nullptr));
        multiplyButton->setText(QApplication::translate("MainWindow", "*", nullptr));
        resultLabel->setText(QApplication::translate("MainWindow", "=", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
