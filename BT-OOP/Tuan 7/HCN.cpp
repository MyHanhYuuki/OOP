#include <iostream>
#include "HCN.h"
int HCN::count = 0;
bool flag_R = false;

bool HCN::isRectangle() {
	return A.GetX() != B.GetX() && A.GetY() != B.GetY();
}

HCN::HCN() {
	A.SetXY(0, 0);
	B.SetXY(0, 0);
}

HCN::HCN(double xA, double yA, double xB, double yB) {
	this->A.SetXY(xA, yA);
	this->B.SetXY(xB, yB);
	if (isRectangle()) count++;
}

HCN::HCN(DIEM P1, DIEM P2) {
	A = P1;
	B = P2;
	if (isRectangle()) count++;
}

HCN::~HCN() {
	if (flag_R == false) count--;
	flag_R = false;
}

int HCN::getCount() {
	return count;
}

DIEM HCN::GetA() {
	return A;
}

DIEM HCN::GetB() {
	return B;
}

void HCN::SetA(DIEM AA) {
	A = AA;
}

void HCN::SetB(DIEM BB) {
	B = BB;
}

double HCN::Perimeter() {
	DIEM D(B.GetX(), A.GetY());
	double a = A.Distance(D);
	double b = D.Distance(B);
	return (a + b) * 2;
}

double HCN::Area() {
	DIEM D(B.GetX(), A.GetY());
	double a = A.Distance(D);
	double b = D.Distance(B);
	return a * b;
}

void HCN::Relocate(double xx, double yy) {
	A.Move(xx, yy);
	B.Move(xx, yy);
}

istream& operator>>(istream& is, HCN& R) {
	cout << "\nA:"; is >> R.A;
	cout << "\nB: "; is >> R.B;
	flag_R = true;
	return is;
}

ostream& operator<<(ostream& os, HCN R) {
	os << "\nA" << R.A << "; B" << R.B;
	flag_R = true;
	return os;
}