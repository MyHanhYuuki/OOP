#include "LinearEquation.h"
#include "LinearProcessor.h"
#include <math.h>
#include <iostream>
using namespace std;

LinearEquation::LinearEquation() {
	this->a = this->b = 0;
}

LinearEquation::LinearEquation(double b) {
	this->a = 0;
	this->b = b;
}

LinearEquation::LinearEquation(double a, double b) {
	this->a = a;
	this->b = b;
}

void LinearEquation::InputLE() {
	cout << "\nNhap a: ";
	cin >> this->a;
	cout << "Nhap b: ";
	cin >> this->b;
}

void LinearEquation::DisplayLE() {
	cout << a << "x" << (b > 0 ? " - " : " + ") << abs(b) << " = 0";
}

void LinearEquation::ComputeLE() {
	cout << "\n=> ";

	if (a == 0 && b != 0) {
		cout << "Phuong trinh vo nghiem.\n";
		return;
	}
	if (a == 0 && b == 0) {
		cout << "Phuong trinh co vo so nghiem.\n";
		return;
	}
	if (a != 0 && b == 0) {
		cout << "x = 0" << endl;
		return;
	}
	cout << "x = " << -b / a << endl;
}