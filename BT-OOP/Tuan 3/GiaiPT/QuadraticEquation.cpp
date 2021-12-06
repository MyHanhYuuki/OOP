#include "QuadraticEquation.h"
#include <math.h>
#include <iostream>
using namespace std;

QuadraticEquation::QuadraticEquation() {
	this->a = this->b = this->c = 0;
}

QuadraticEquation::QuadraticEquation(double a) {
	this->a = a;
	this->b = this->c = 0;
}

QuadraticEquation::QuadraticEquation(double a, double b) {
	this->a = a;
	this->b = b;
	this->c = 0;
}

QuadraticEquation::QuadraticEquation(double a, double b, double c) {
	this->a = a;
	this->b = b;
	this->c = c;
}

void QuadraticEquation::InputQE() {
	cout << "\nNhap a: ";
	cin >> this->a;
	cout << "Nhap b: ";
	cin >> this->b;
	cout << "Nhap c: ";
	cin >> this->c;
}

void QuadraticEquation::DisplayQE() {
	cout << a << "x" << (b > 0 ? " - " : " + ") << abs(b) << (c > 0 ? " - " : " + ") << abs(c) << " = 0";
}

void QuadraticEquation::ComputeQE() {
	double delta = b * b - 4 * a * c;

	cout << "\n=> ";

	if (delta < 0) {
		double r = -b / (2 * a);
		double i = sqrt(-delta) / (2 * a);

		cout << "\tx1 = ";
		if (r != 0) {
			cout << r;
			if (i == 1 || i == -1) {
				cout << " + i";
			}
			else cout << " + " << abs(i) << "i";
		}
		if (r == 0) {
			if (i == 1 || i == -1) {
				cout << "i";
			}
			else cout << abs(i) << "i";
		}

		cout << "\n\tx2 = ";
		if (r != 0) {
			cout << r;
			if (i == 1 || i == -1) {
				cout << " - i";
			}
			else cout << " - " << abs(i) << "i";
		}
		if (r == 0) {
			if (i == 1 || i == -1) {
				cout << "-i";
			}
			else cout << abs(i) << "i";
		}
	}
	else if (delta == 0) {
		cout << "x = " << -b / (2 * a) << endl;
	}
	else if (delta > 0) {
		cout << "\tx1 = " << (-b - sqrt(delta)) / 2 * a << endl;
		cout << "\tx2 = " << (-b + sqrt(delta)) / 2 * a << endl;
	}
}