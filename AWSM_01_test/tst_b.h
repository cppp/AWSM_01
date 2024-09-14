#ifndef TST_B_H
#define TST_B_H

#include <QtTest>

class B : public QObject
{
    Q_OBJECT

public:
    B();
    ~B();

private slots:
    void test_case1();
};

#endif // TST_B_H
