#include <iostream>
#include <math.h>
#include "DIEM3C.h"
using namespace std;

DIEM3C::DIEM3C(double xx, double yy, double zz) {
	setXYZ(xx, yy, zz);
}

void DIEM3C::setXYZ(double xx, double yy, double zz) {
	x = xx;
	y = yy;
	z = zz;
}

void DIEM3C::input() {
	cout << "\nx = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "z = "; cin >> z;
}

void DIEM3C::display() {
	cout << "(" << x << ", " << y << ", " << z << ")";
}

istream& operator>>(istream& is, DIEM3C& P) {
	P.input();
	return is;
}

ostream& operator<<(ostream& os, DIEM3C P) {
	P.display();
	return os;
}

bool DIEM3C::isDuplicate(DIEM3C P) {
	return x == P.x && y == P.y && z == P.z;
}

DIEM3C::~DIEM3C() {
	x = y = z = 0;
}