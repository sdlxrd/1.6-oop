//Number.cpp
//////////////////////////////////////////////////////////////////
#include "Number.h"
#include <iostream>
#include <cmath>
#define PI 3.1415926535

using namespace std;

void Real::Init(Real::Number num)
{
	setNum(num);
}

void Real::Number::Init(double number, double snumber)
{
	setNumber(number);
	setsNumber(snumber);
}
void Real::Number::Read()
{
	cout << "first number = "; cin >> number;
	cout << "second number = "; cin >> snumber;
	Init(number, snumber);
	cout << endl;
}

void Real::Read()
{
	Real::Number f;
	f.Read();
	this->Init(f);
}

void Real::Display() const 
{ 
	num.Display(); 
}
void Real::Number::Display() const
{
	cout <<"first number = " << number << endl << "second number = " << snumber << endl << endl;
}

double Real::Number::substr()
{
	return number - snumber;
}
double Real::Number::multiply()
{
	return number * snumber;
}

void Real::square(double n)
{
	cout << "firtst square = " << pow(num.getNumber(), 1 / n) << endl;
	cout << "second square = " << pow(num.getsNumber(), 1 / n) << endl;
 }
double Real::step(int n)
{
	cout << endl << "PI = " << pow(PI, n) << endl;
	return pow(PI, n);
}