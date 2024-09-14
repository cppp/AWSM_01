#include <QtTest>
#include "tst_a.h"
#include "tst_b.h"

int main(int argc, char *argv[]) {
    QCoreApplication app(argc, argv);

    A aTest;
    B bTest;

    if (argc == 1) {
        // Run both tests normally with default output
        QTest::qExec(&aTest, argc, argv);
        QTest::qExec(&bTest, argc, argv);
    } else {
        // If arguments are provided, handle XML output for each test separately
        const char *argvA[] = {argv[0], "-xml", "-o", "test_results_a.xml"};
        QTest::qExec(&aTest, 4, const_cast<char**>(argvA));

        // Custom arguments for B's XML output
        const char *argvB[] = {argv[0], "-xml", "-o", "test_results_b.xml"};
        QTest::qExec(&bTest, 4, const_cast<char**>(argvB));
    }

    return 0;
}
