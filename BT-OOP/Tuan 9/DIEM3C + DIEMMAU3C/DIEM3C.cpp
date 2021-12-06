#include <iostream>
#include <math.h>
#include "DIEM3C.h"
using namespace std;

DIEM3C::DIEM3C(double x, double y, double z) :DIEM(x, y) {
	this->z = z;
}

void DIEM3C::setZ(double z) {
	this->z = z;
}

double DIEM3C::getZ() {
	return z;
}

double DIEM3C::distance(DIEM3C P) {
	return sqrt(pow(x - P.x, 2) + pow(y - P.y, 2) + pow(z - P.z, 2));
}

bool DIEM3C::isTriangle(DIEM3C P1, DIEM3C P2, DIEM3C P3) {
	double a = P1.distance(P2);
	double b = P2.distance(P3);
	double c = P3.distance(P1);
	return a > 0 && b > 0 && c > 0 && a + b > c && a + c > b && b + c > a;
}

double DIEM3C::perimeter(DIEM3C P1, DIEM3C P2, DIEM3C P3) {
	return P1.distance(P2) + P2.distance(P3) + P3.distance(P1);
}

double DIEM3C::area(DIEM3C A, DIEM3C B, DIEM3C C) {
	double a1 = B.x - A.x, a2 = B.y - A.y, a3 = B.z - A.z;
	double b1 = C.x - A.x, b2 = C.y - A.y, b3 = C.z - A.z;
	return sqrt(pow(A.distance(B), 2) * pow(A.distance(C), 2) - pow(a1 * b1 + a2 * b2 + a3 * b3, 2)) / 2;
}

DIEM3C DIEM3C::symmetry() {
	DIEM3C P(x == 0 ? 0 : -x, y == 0 ? 0 : -y, z == 0 ? 0 : -z);
	return P;
}

void DIEM3C::relocate(double xx, double yy, double zz) {
	x += xx;
	y += yy; 
	z += zz;
}

void DIEM3C::input() {
	DIEM::input();
	cout << "z = "; cin >> z;
}

void DIEM3C::display() {
	cout << "(" << x << ", " << y << ", " << z << ")";
}

istream& operator>>(istream& is, DIEM3C& P) {
	P.DIEM::input();
	cout << "z = "; is >> P.z;
	return is;
}

ostream& operator<<(ostream& os, DIEM3C P) {
	os << "(" << P.x << ", " << P.y << ", " << P.z << ")";
	return os;
}

bool DIEM3C::isDuplicate(DIEM3C P) {
	return (*this).DIEM::isDuplicate(P) && z == P.z;
}

DIEM3C::~DIEM3C() {
	x = y = z = 0;
}