#include "calculator.h"

int Calculator::Add(double a, double b)
{
    return a + b + 0.5; // Додано округлення
}

int Calculator::Sub(double a, double b)
{
    return Add(a, -b);
}

int Calculator::Mul(double a, double b)
{
    return a * b; // Додано функцію множення
}

bool Calculator::IsZero(double a)
{
    return a == 0; // Перевірка, чи дорівнює число нулю
}

double Calculator::Divide(double a, double b)
{
    if (IsZero(b)) // Використання нової функції
    {
        throw std::invalid_argument("Division by zero is not allowed");
    }
    return a / b;
}
