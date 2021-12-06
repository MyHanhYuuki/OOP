#include <iostream>
#include "DIEMMAU.h"

DIEMMAU::DIEMMAU(double xx, double yy, int rr, int gg, int bb) :DIEM(xx, yy), MAU(rr, gg, bb) {
	DIEM::setXY(xx, yy);
	MAU::setRGB(rr, gg, bb);
}

DIEMMAU::~DIEMMAU() {
	DIEM::~DIEM();
	MAU::~MAU();
}

void DIEMMAU::input() {
	DIEM::input();
	MAU::input();
}

void DIEMMAU::display() {
	DIEM::display();
	cout << "\n";
	MAU::display();
}

bool DIEMMAU::isDuplicate(DIEMMAU CP) {
	return (*this).DIEM::isDuplicate(CP) && (*this).MAU::isDuplicate(CP);
}

istream& operator>>(istream& is, DIEMMAU& CP) {
	CP.input();
	return is;
}

ostream& operator<<(ostream& os, DIEMMAU CP) {
	CP.display();
	return os;
}

bool operator==(DIEMMAU CP1, DIEMMAU CP2) {
	return (CP1).DIEM::isDuplicate(CP2) && (CP1).MAU::isDuplicate(CP2);
}