//FuzzyNumber.cpp
#include "FuzzyNumber.h"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;


FuzzyNumber FuzzyNumber::Add(FuzzyNumber num1, FuzzyNumber num2) {
	FuzzyNumber t;
	t.Init(num1.x + num2.x - num1.l - num2.l, num1.x + num2.x, num1.x + num2.x + num1.r + num2.r);
	return t;
}
FuzzyNumber FuzzyNumber::Sub(FuzzyNumber A, FuzzyNumber B) {
	FuzzyNumber t;
	t.Init(A.x - B.x - A.l - B.l, A.x - B.x, A.x - B.x + A.r + B.r);
	return t;
}
FuzzyNumber FuzzyNumber::Div(FuzzyNumber a, FuzzyNumber b) {
	FuzzyNumber t;
	if (b.x > 0) {
		t.Init((a.x - a.l) / (b.x + b.r), a.x / b.x, (a.x + a.r) / (b.x - b.l));
	}
	return t;
}
FuzzyNumber FuzzyNumber::Inverse(FuzzyNumber a) {
	FuzzyNumber t;
	if (a.x > 0) {
		t.Init(1.0 / (a.x + a.r), 1.0 / a.x, 1.0 / (a.x - a.l));
	}
	return t;
}
void FuzzyNumber::Init(double x_value, double l_value, double r_value) {
	x = x_value;
	l = l_value;
	r = r_value;
}
void FuzzyNumber::Read() {
	double x, l, r;
	cout << "Input x:" << endl;cin >> x;
	cout << "Input l:" << endl;cin >> l;
	cout << "Input r:" << endl;cin >> r;
	Init(x, l, r);
}
void FuzzyNumber::Display() const {
	
	cout << "x:" << x << endl;
	cout << "l:" << l << endl;
	cout << "r:" << r << endl;
	cout << endl;
}
string FuzzyNumber::toString() const {
	stringstream sout;

	sout << "x:" << x << endl;
	sout << "l:" << l << endl;
	sout << "r:" << r << endl<< endl;
	return sout.str();
}
