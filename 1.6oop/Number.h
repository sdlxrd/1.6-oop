//Number.h
//////////////////////////////////////////////////////////////////
#pragma once
#include <iostream>

using namespace std;

class Real
{
private:
	class Number
	{
	private:
		double number;
		double snumber;
	public:
		double getNumber() const { return number; }
		void setNumber(double number) { this->number = number; }

		double getsNumber() const { return snumber; }
		void setsNumber(double snumber) { this->snumber = snumber; }

		void Init(double number, double snumber);
		void Display() const;
		void Read();

		double substr();
		double multiply();
	};
	Number num;
public:
	Real::Number getNum() const { return num; }
	void setNum(Real::Number num) { this->num = num; }

	void Init(Real::Number num);
	void Read();
	void Display() const;

    double step(int n);
	void square(double n);
};