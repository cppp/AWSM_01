#include <QtTest>
#include "../calulator.h"
// add necessary includes here

class Test_calc: public QObject
{
    Q_OBJECT

public:
    Test_calc();
    ~Test_calc();

private slots:
    void test_add();
};

Test_calc::Test_calc() {}

Test_calc::~Test_calc() {}

void Test_calc::test_add() {
    // Calulator c = new Calulator();
    // QVERIFY(c.add(5,5)==10);
}

// QTEST_APPLESS_MAIN(Test_calc)

#include "tst_test_calc.moc"
