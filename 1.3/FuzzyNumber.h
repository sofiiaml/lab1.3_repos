//FuzzyNUmber.h
#pragma once
#include<string>
using namespace std;

class FuzzyNumber {
private:
	double x;
	double l;
	double r;
public:
	double getX() const { return x; }
	double getL() const { return l; }
	double getR() const { return r; }
	void setX(double value) { x = value; }
	void setL(double value) { l = value; }
	void setR(double value) { r = value; }
	static FuzzyNumber Add(FuzzyNumber num1, FuzzyNumber num2);
	static FuzzyNumber Sub(FuzzyNumber A, FuzzyNumber B);
	static FuzzyNumber Div(FuzzyNumber a, FuzzyNumber b);
	static FuzzyNumber Inverse(FuzzyNumber a);
	void Init(double x_value, double l_value, double r_value);
	void Read();
	void Display() const;
	string toString() const;
};