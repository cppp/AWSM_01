#include <QtTest>
#include <QtWidgets>
#include "../calulator.cpp"
#include "../mainwindow.h"

class TestCalculatorGUI : public QObject
{
    Q_OBJECT

private slots:
    void test_divion();
};

// Test for division (should display correct result in label)
void TestCalculatorGUI::test_divion()
{
    MainWindow mainWindow;

    QLineEdit *num1LineEdit = mainWindow.findChild<QLineEdit*>("num1LineEdit");
    QLineEdit *num2LineEdit = mainWindow.findChild<QLineEdit*>("num2LineEdit");
    QPushButton *divideButton = mainWindow.findChild<QPushButton*>("divideButton");
    QLabel *resultLabel = mainWindow.findChild<QLabel*>("resultLabel");

    QVERIFY(num1LineEdit);
    QVERIFY(num2LineEdit);
    QVERIFY(divideButton);
    QVERIFY(resultLabel);

    QTest::keyClicks(num1LineEdit, "8");
    QTest::keyClicks(num2LineEdit, "2");

    QTest::mouseClick(divideButton, Qt::LeftButton);

    // Verify that the result label displays the correct division result
    QCOMPARE(resultLabel->text(), QString("4"));  // 8 / 2 = 4
}

QTEST_MAIN(TestCalculatorGUI)
#include "tst_test_string.moc"
