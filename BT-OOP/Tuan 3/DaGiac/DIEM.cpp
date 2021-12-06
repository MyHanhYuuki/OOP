#include "DIEM.h"
#include <iostream>
using namespace std;

DIEM::DIEM() {
	this->x = 0;
	this->y = 0;
}

DIEM::DIEM(double x, double y) {
	this->x = x;
	this->y = y;
}

void DIEM::SetX(double x) {
	this->x = x;
}

void DIEM::SetY(double y) {
	this->y = y;
}

double DIEM::GetX() {
	return this->x;
}

double DIEM::GetY() {
	return this->y;
}

void DIEM::Move(double x, double y) {
	this->x += x;
	this->y += y;
}

ostream& operator << (ostream& os, const DIEM pnt) {
	os << "(" << pnt.x << "," << pnt.y << ")" << endl;
	return os;
}

istream& operator >> (istream& is, DIEM& pnt) {
	cout << "x = ";
	is >> pnt.x;
	cout << "y = ";
	is >> pnt.y;
	return is;
}