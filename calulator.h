#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <cmath>  // For power function

class Calculator
{
public:
    Calculator();

    // Basic arithmetic operations
    int add(int a, int b);
    int subtract(int a, int b);
    int multiply(int a, int b);
    double divide(int a, int b);  // Division should return a double
    int modulus(int a, int b);

    // Advanced operations
    double power(int base, int exponent);  // Power function
    double sqrt(double a);  // Square root
};

#endif // CALCULATOR_H
