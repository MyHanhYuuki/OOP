#include <iostream>
#include "DIEM3CMAU.h"

DIEM3CMAU::DIEM3CMAU(double xx, double yy, double zz, int rr, int gg, int bb) :DIEM3C(xx, yy, zz), MAU(rr, gg, bb) {
	DIEM3C::setXYZ(xx, yy, zz);
	MAU::setRGB(rr, gg, bb);
}

DIEM3CMAU::~DIEM3CMAU() {
	DIEM3C::~DIEM3C();
	MAU::~MAU();
}

void DIEM3CMAU::input() {
	DIEM3C::input();
	MAU::input();
}

void DIEM3CMAU::display() {
	DIEM3C::display();
	cout << "\n";
	MAU::display();
}

bool DIEM3CMAU::isDuplicate(DIEM3CMAU CP) {
	return (*this).DIEM3C::isDuplicate(CP) && (*this).MAU::isDuplicate(CP);
}

istream& operator>>(istream& is, DIEM3CMAU& CP) {
	CP.input();
	return is;
}

ostream& operator<<(ostream& os, DIEM3CMAU CP) {
	CP.display();
	return os;
}

bool operator==(DIEM3CMAU CP1, DIEM3CMAU CP2) {
	return (CP1).DIEM3C::isDuplicate(CP2) && (CP1).MAU::isDuplicate(CP2);
}