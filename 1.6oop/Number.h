#pragma once
#include "Number.cpp"
#include <sstream>
#include <iostream>

using namespace std;

class Real
{
private:
	class Number
	{
	private:
		double number;
	public:
		double getNumber() const { return number; }
		void setNumber(double value);

		bool Init(double x);
		void Display(Number p, Number s) const;    
		double Read();

		double substr(Number p, Number s);
		double multiply(Number p, Number s);

		string toString(Number p, Number s) const;
	};
	Number num;
public:
	double Real::Number GetNum() const { return number; }
	Real::Number getNum() const { return num; }
	void setnum(Real::Number num) { this->num = num; }
	double step(int n);
	double square(Number p, int n);
};

