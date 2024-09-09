#include <QtTest>

// add necessary includes here

class Test_string : public QObject
{
    Q_OBJECT

public:
    Test_string();
    ~Test_string();

private slots:
    void test_case1();
};

Test_string::Test_string() {}

Test_string::~Test_string() {}

void Test_string::test_case1() {
    QVERIFY(1==2);
}

QTEST_APPLESS_MAIN(Test_string)

#include "tst_test_string.moc"
