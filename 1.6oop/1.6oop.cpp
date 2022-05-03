//source.cpp
//////////////////////////////////////////////////////////////////
#include "Number.h"
#include <iostream>

using namespace std;

int main()
{
	Real f;
	f.Read();
	f.Display();

	cout << "result of substr = " << f.getNum().substr() << endl;
	cout << "result of multpl = " << f.getNum().multiply() << endl << endl;

	double n;
	cout << "number for square = ";
	cin >> n;
	
	f.square(n);
	f.step(n);
}