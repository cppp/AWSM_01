// #include <QtTest>
// #include "../calulator.cpp"

// // add necessary includes here

// class Test_calc : public QObject
// {
//     Q_OBJECT

// public:
//     Test_calc();
//     ~Test_calc();

// private slots:
//     // Data-driven tests for the add function
//     void test_add_data();
//     void test_add();

//     // Data-driven tests for other functions can follow the same pattern
//     void test_subtract_data();
//     void test_subtract();
// };

// // Constructor and Destructor
// Test_calc::Test_calc() {}
// Test_calc::~Test_calc() {}

// // Data-driven test for the add function
// void Test_calc::test_add_data()
// {
//     // Create the table of inputs and expected results
//     QTest::addColumn<int>("a");       // Input a
//     QTest::addColumn<int>("b");       // Input b
//     QTest::addColumn<int>("expected"); // Expected result

//     // Add test data
//     QTest::newRow("positive numbers") << 3 << 2 << 5;  // 3 + 2 = 5
//     QTest::newRow("negative and positive") << -1 << 1 << 0;  // -1 + 1 = 0
//     QTest::newRow("zero addition") << 0 << 0 << 0;     // 0 + 0 = 0
// }

// // The actual test that runs with the data
// void Test_calc::test_add()
// {
//     // Fetch the data from the test_add_data function
//     QFETCH(int, a);      // Retrieve input a
//     QFETCH(int, b);      // Retrieve input b
//     QFETCH(int, expected); // Retrieve expected result

//     // Perform the test
//     Calculator calc;
//     QCOMPARE(calc.add(a, b), expected);
// }

// // Example for test_subtract with data-driven test
// void Test_calc::test_subtract_data()
// {
//     QTest::addColumn<int>("a");
//     QTest::addColumn<int>("b");
//     QTest::addColumn<int>("expected");

//     QTest::newRow("simple subtraction") << 5 << 3 << 2;    // 5 - 3 = 2
//     QTest::newRow("negative subtraction") << -2 << -2 << 0; // -2 - (-2) = 0
//     QTest::newRow("negative result") << 0 << 1 << -1;      // 0 - 1 = -1
// }

// void Test_calc::test_subtract()
// {
//     QFETCH(int, a);
//     QFETCH(int, b);
//     QFETCH(int, expected);

//     Calculator calc;
//     QCOMPARE(calc.subtract(a, b), expected);
// }

// QTEST_APPLESS_MAIN(Test_calc)

// #include "tst_test_calc.moc"








// // #include <QtTest>
// // #include "../calulator.cpp"

// // // add necessary includes here

// // class Test_calc : public QObject
// // {
// //     Q_OBJECT

// // public:
// //     Test_calc();
// //     ~Test_calc();

// // private slots:
// //     void test_add();
// //     void test_subtract();
// //     void test_multiply();
// //     void test_divide();
// //     void test_modulus();
// //     void test_power();
// //     // void test_sqrt();
// //     // void test_divide_by_zero();
// //     // void test_sqrt_of_negative();
// // };

// // Test_calc::Test_calc() {}

// // Test_calc::~Test_calc() {}

// // // Test add function
// // void Test_calc::test_add() {
// //     Calculator calc;
// //     QCOMPARE(calc.add(3, 2), 5);     // 3 + 2 = 5
// //     QCOMPARE(calc.add(-1, 1), 0);    // -1 + 1 = 0
// //     QCOMPARE(calc.add(0, 0), 0);     // 0 + 0 = 0
// // }

// // // Test subtract function
// // void Test_calc::test_subtract() {
// //     Calculator calc;
// //     QCOMPARE(calc.subtract(5, 3), 2);   // 5 - 3 = 2
// //     QCOMPARE(calc.subtract(-2, -2), 0); // -2 - (-2) = 0
// //     QCOMPARE(calc.subtract(0, 1), -1);  // 0 - 1 = -1
// // }

// // // Test multiply function
// // void Test_calc::test_multiply() {
// //     Calculator calc;
// //     QCOMPARE(calc.multiply(4, 3), 12);    // 4 * 3 = 12
// //     QCOMPARE(calc.multiply(0, 100), 0);   // 0 * 100 = 0
// //     QCOMPARE(calc.multiply(-2, 3), -6);   // -2 * 3 = -6
// // }

// // // Test divide function
// // void Test_calc::test_divide() {
// //     Calculator calc;
// //     QCOMPARE(calc.divide(6, 3), 2.0);    // 6 / 3 = 2.0
// //     QCOMPARE(calc.divide(5, 2), 2.5);    // 5 / 2 = 2.5
// // }

// // // // Test division by zero (expected exception)
// // // void Test_calc::test_divide_by_zero() {
// // //     Calculator calc;
// // //     QVERIFY_EXCEPTION_THROWN(calc.divide(10, 0), std::invalid_argument); // Division by 0
// // // }

// // // Test modulus function
// // void Test_calc::test_modulus() {
// //     Calculator calc;
// //     QCOMPARE(calc.modulus(10, 3), 1);   // 10 % 3 = 1
// //     QCOMPARE(calc.modulus(5, 5), 0);    // 5 % 5 = 0
// // }

// // // Test power function
// // void Test_calc::test_power() {
// //     Calculator calc;
// //     QCOMPARE(calc.power(2, 3), 8.0);    // 2^3 = 8
// //     QCOMPARE(calc.power(5, 0), 1.0);    // 5^0 = 1
// // }

// // // // Test square root function
// // // void Test_calc::test_sqrt() {
// // //     Calculator calc;
// // //     QCOMPARE(calc.sqrt(25), 5.0);       // sqrt(25) = 5
// // //     QCOMPARE(calc.sqrt(0), 0.0);        // sqrt(0) = 0
// // // }

// // // // Test square root of a negative number (expected exception)
// // // void Test_calc::test_sqrt_of_negative() {
// // //     Calculator calc;
// // //     QVERIFY_EXCEPTION_THROWN(calc.sqrt(-9), std::invalid_argument); // sqrt of negative number
// // // }

// // QTEST_APPLESS_MAIN(Test_calc)

// // #include "tst_test_calc.moc"
