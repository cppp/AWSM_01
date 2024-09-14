#ifndef TST_A_H
#define TST_A_H

#include <QtTest>

class A : public QObject
{
    Q_OBJECT

public:
    A();
    ~A();

private slots:
    void test_case1();
};

#endif // TST_A_H
