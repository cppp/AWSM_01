#include "calulator.h"

// Constructor definition
Calculator::Calculator() {
    // Constructor body (empty for now, but you can initialize values here if needed)
}

// Basic operations
int Calculator::add(int a, int b) {
    return a + b;
}

int Calculator::subtract(int a, int b) {
    return a - b;
}

int Calculator::multiply(int a, int b) {
    return a * b;
}

double Calculator::divide(int a, int b) {
    if (b != 0)
        return static_cast<double>(a) / b;  // Return a double for precision

}

int Calculator::modulus(int a, int b) {
    if (b != 0)
        return a % b;

}

// Advanced operations
double Calculator::power(int base, int exponent) {
    return std::pow(base, exponent);
}

double Calculator::sqrt(double a) {
    if (a >= 0)
        return std::sqrt(a);
}
