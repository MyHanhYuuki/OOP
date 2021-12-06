#pragma once
#ifndef CPX
#define CPX
#include <iostream>
using namespace std;

class Complex
{
private:
	double real, img;

public:
	Complex();
	Complex(double, double);
	friend Complex operator+(Complex, Complex);
	friend Complex operator-(Complex, Complex);
	friend Complex operator*(Complex, Complex);
	friend Complex operator/(Complex, Complex);
	friend istream& operator>>(istream&, Complex&);
	friend ostream& operator<<(ostream&, Complex);
};

#endif