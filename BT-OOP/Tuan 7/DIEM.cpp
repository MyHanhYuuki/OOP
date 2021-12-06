#include "DIEM.h"
#include <iostream>
#include <math.h>
using namespace std;

DIEM::DIEM() {
	this->x = this->y = 0;
}

DIEM::DIEM(double x, double y) {
	this->x = x;
	this->y = y;
}

double DIEM::GetX() {
	return x;
}

double DIEM::GetY() {
	return y;
}

void DIEM::SetXY(double x, double y) {
	this->x = x;
	this->y = y;
}

double DIEM::Distance(DIEM P) {
	return sqrt(pow(x - P.x, 2) + pow(y - P.y, 2));
}

void DIEM::Move(double x, double y) {
	this->x += x;
	this->y += y;
}

istream& operator>>(istream& is, DIEM& P) {
	cout << "\nx = "; is >> P.x;
	cout << "y = "; is >> P.y;
	return is;
}

ostream& operator<<(ostream& os, DIEM P)
{
	os << "(" << P.x << ", " << P.y << ")";
	return os;
}