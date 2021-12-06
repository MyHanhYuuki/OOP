#include <iostream>
#include "HTRON.h"
int HTRON::count = 0;
bool flag_C = false;

HTRON::HTRON() {
	I.SetXY(0, 0);
	r = 0;
}

HTRON::HTRON(DIEM II, double rr) {
	I = II;
	r = rr;
	if (r > 0) count++;
}

HTRON::~HTRON() {
	if (flag_C == false) count--;
	flag_C = false;
}

int HTRON::getCount() {
	return count;
}

void HTRON::SetI(DIEM II) {
	I = II;
}

void HTRON::SetR(double rr) {
	r = rr;
}

DIEM HTRON::GetI() {
	return I;
}

double HTRON::GetR() {
	return r;
}

double HTRON::Perimeter() {
	return 2 * r * 3.14;
}

double HTRON::Area() {
	return r * r * 3.14;
}

void HTRON::Relocate(double xx, double yy) {
	I.Move(xx, yy);
}

istream& operator>>(istream& is, HTRON& C) {
	cout << "\nTam I:"; is >> C.I;
	flag_C = true;
	return is;
}

ostream& operator<<(ostream& os, HTRON C) {
	os << "\nTam I" << C.I << ", ban kinh r = " << C.r;
	flag_C = true;
	return os;
}