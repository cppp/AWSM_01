#include <QTest>
#include "tst_test_calc.cpp"
#include "tst_test_string.cpp"

int main(int argc, char *argv[]) {
    int status = 0;

    // Run Test_calc
    {
        Test_calc test;
        status |= QTest::qExec(&test, argc, argv);
    }

    // Run Test_string
    {
        Test_string test;
        status |= QTest::qExec(&test, argc, argv);
    }

    return status;
}
