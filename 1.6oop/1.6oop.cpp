#include "Number.h"
#include <sstream>
#include <string>
#include <iostream>

using namespace std;

int main()
{
	Real p, s, k, f;

	p.getNum().Read();
	s.getNum().Read();
	
	cout << endl;
	k.getNum().Display(p, s);

	cout << "result of Substraction = " << k.getNum().substr(p, s) << endl;
	cout << "result of Multiplying = " << k.getNum().multiply(p, s) << endl;


	int n;
	cout << endl << "Stepin is: "; cin >> n;

	cout << endl << "first number square = " << f.square(p, n) << endl;
	cout << "second number square = " << f.square(s, n) << endl << endl;
	cout << "PI result = " << f.step(n) << endl;
}