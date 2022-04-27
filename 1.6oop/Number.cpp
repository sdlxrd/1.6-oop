#include "Number.h"
#include <iostream>
#define PI 3.1415926535

using namespace std;

double Real::square(Number p, int n)
{
    double result = pow(p.getNumber(), 1.0 / n);
    return result;
}
double Real::step(int c)
{
    long double result = pow(PI, c);
    return result;
}
void Real::Number::setNumber(double value)
{
    number = value;
}
bool Real::Number::Init(double x)
{
    if (x >= 0)
    {
        number = x;
        return true;
    }
    else {
        return false;
    }
}
double Real::Number::Read()
{
    double x;
    do
    {
        cout << "number = ";
        cin >> x;
    } while (!Init(x));
    return x;
}
void Real::Number::Display(Number p, Number s) const
{
    cout << toString(p, s) << endl;
}
double Real::Number::substr(Number p, Number s)
{
    double result = p.number - s.number;
    return result;
}
double Real::Number::multiply(Number p, Number s)
{
    double result = p.number * s.number;
    return result;
}
string Real::Number::toString(Number p, Number s) const
{
    stringstream sout;

    sout << "first number = " << p.number << endl;
    sout << "second number = " << s.number << endl;

    return sout.str();
}