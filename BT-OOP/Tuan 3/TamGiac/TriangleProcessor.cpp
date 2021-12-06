#include "Triangle.h"
#include <math.h>
#include <iostream>
using namespace std;

void Triangle::Set() {
	this->a = a;
	this->b = b;
	this->c = c;
}

void Triangle::Get(Triangle& t) {
	cout << "\nNhap do dai canh AB: ";
	cin >> this->c;
	cout << "Nhap do dai canh BC: ";
	cin >> this->a;
	cout << "Nhap do dai canh AC: ";
	cin >> this->b;
}

void Triangle::Display(Triangle t) {
	cout << "\nAB = " << c << endl;
	cout << "BC = " << a << endl;
	cout << "AC = " << b << endl;
}

bool Triangle::isTriangle(Triangle t) {
	return (a < b + c && b < a + c && c < a + b) ? true : false;
}

void Triangle::Classifier(Triangle t) {
	if (a * a == b * b + c * c) cout << "\nTam giac ABC vuong tai A." << endl;
	if (b * b == a * a + c * c) cout << "\nTam giac ABC vuong tai B." << endl;
	if (c * c == a * a + b * b) cout << "\nTam giac ABC vuong tai C." << endl;
	if (a == b && a == c) cout << "\nTam giac ABC la tam giac deu." << endl;
	if (a == b && a != c) cout << "\nTam giac ABC can tai C." << endl;
	if (a == c && a != b) cout << "\nTam giac ABC can tai B." << endl;
	if (b == c && a != c) cout << "\nTam giac ABC can tai A." << endl;
}

double Triangle::Perimeter(Triangle t) {
	return a + b + c;
}

double Triangle::Square(Triangle t) {
	double p = (a + b + c) / 2;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}