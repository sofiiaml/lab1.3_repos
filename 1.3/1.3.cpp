//1.3.cpp
#include <iostream>
#include <string>
#include <sstream>
#include "FuzzyNumber.h"

using namespace std;

int main() {
	FuzzyNumber a, b, c,d,e,f;
	a.Init(4, 3, 2);
	b.Read();
	c=FuzzyNumber::Add(a, b);
	cout << "a+b:" << endl;
	c.Display();
	d = FuzzyNumber::Sub(a, b);
	cout << "a-b:" << endl;
	d.Display();
	e = FuzzyNumber::Inverse(a);
	cout << "1/a:" << endl;
	e.Display();
	f = FuzzyNumber::Div(a, b);
	cout << "a/b:" << endl;
	cout << f.toString();
}
