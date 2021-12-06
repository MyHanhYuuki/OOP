#include <iostream>
#include "TAMGIAC.h"
#define epsilon pow(10, -9)
int TAMGIAC::count = 0;
bool flag_T = false;

TAMGIAC::TAMGIAC() {
	this->A.SetXY(0, 0);
	this->B.SetXY(0, 0);
	this->C.SetXY(0, 0);
}

TAMGIAC::TAMGIAC(double xA, double yA, double xB, double yB, double xC, double yC) {
	this->A.SetXY(xA, yA);
	this->B.SetXY(xB, yB);
	this->C.SetXY(xC, yC);
	if (isTriangle()) count++;
}

TAMGIAC::TAMGIAC(DIEM P1, DIEM P2, DIEM P3) {
	A = P1;
	B = P2;
	C = P3;
	if (isTriangle()) count++;
}

TAMGIAC::~TAMGIAC() {
	if (flag_T == false) count--;
	flag_T = false;
}

int TAMGIAC::getCount() {
	return count;
}

void TAMGIAC::SetA(DIEM AA) {
	A = AA;
}

void TAMGIAC::SetB(DIEM BB) {
	B = BB;
}

void TAMGIAC::SetC(DIEM CC)
{
	C = CC;
}

DIEM TAMGIAC::GetA() {
	return A;
}

DIEM TAMGIAC::GetB() {
	return B;
}

DIEM TAMGIAC::GetC() {
	return C;
}

double TAMGIAC::Area() {
	double a = A.Distance(B);
	double b = B.Distance(C);
	double c = C.Distance(A);
	double p = (a + b + c) / 2;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}

double TAMGIAC::Perimeter() {
	double a = A.Distance(B);
	double b = B.Distance(C);
	double c = C.Distance(A);
	return a + b + c;
}

bool TAMGIAC::isTriangle() {
	double a = A.Distance(B);
	double b = B.Distance(C);
	double c = C.Distance(A);
	return a > 0 && b > 0 && c > 0 && a + b > c && a + c > b && b + c > a;
}

void TAMGIAC::Classify() {
	if (isTriangle()) {
		double a = A.Distance(B);
		double b = B.Distance(C);
		double c = C.Distance(A);

		if (a == b && b == c) cout << "\nDay la tam giac deu.";
		else if (a == b || b == c || c == a) {
			if (abs(a * a + b * b - c * c) <= epsilon || abs(a * a + c * c - b * b) <= epsilon || abs(b * b + c * c - a * a) <= epsilon)
				cout << "\nDay la tam giac vuong can.";
			else cout << "\nDay la tam giac can.";
		}
		else if (abs(a * a + b * b - c * c) <= epsilon || abs(a * a + c * c - b * b) <= epsilon || abs(b * b + c * c - a * a) <= epsilon)
			cout << "\nDay la tam giac vuong.";
		else cout << "\nDay la tam giac thuong.";
	}
	else cout << "\nDay khong phai tam giac.";
}

void TAMGIAC::Relocate(double xx, double yy) {
	A.Move(xx, yy);
	B.Move(xx, yy);
	C.Move(xx, yy);
}

istream& operator>>(istream& is, TAMGIAC& T) {
	cout << "\nA:"; is >> T.A;
	cout << "\nB: "; is >> T.B;
	cout << "\nC: "; is >> T.C;
	flag_T = true;
	return is;
}

ostream& operator<<(ostream& os, TAMGIAC T) {
	os << "\nA" << T.A << "; B" << T.B << "; C" << T.C;
	flag_T = true;
	return os;
}