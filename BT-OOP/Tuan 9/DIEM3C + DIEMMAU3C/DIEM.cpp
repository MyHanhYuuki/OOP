#include "DIEM.h"
#include <iostream>
#include <math.h>
using namespace std;

DIEM::DIEM(double x, double y) {
	this->x = x;
	this->y = y;
}
 
double DIEM::getX() {
	return x;
}

double DIEM::getY() {
	return y;
}

void DIEM::SetXY(double x, double y) {
	this->x = x;
	this->y = y;
}

void DIEM::input() {
	cout << "\nx = "; cin >> x;
	cout << "y = "; cin >> y;
}

void DIEM::display() {
	cout << "(" << x << ", " << y << ")";
}

istream& operator>>(istream& is, DIEM& P) {
	P.DIEM::input();
	return is;
}

ostream& operator<<(ostream& os, DIEM P) {
	P.DIEM::display();
	return os;
}

bool DIEM::isDuplicate(DIEM P) {
	return x == P.x && y == P.y;
}

DIEM::~DIEM() {
	x = y = 0;
}