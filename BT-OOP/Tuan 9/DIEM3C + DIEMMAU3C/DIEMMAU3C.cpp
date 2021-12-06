#include "DIEMMAU3C.h"
using namespace std;

DIEMMAU3C::DIEMMAU3C(double xx, double yy, double zz, int rr, int gg, int bb) :DIEM3C(xx, yy, zz), r(rr), g(gg), b(bb) {
	setRGB(rr, gg, bb);
}

void DIEMMAU3C::setR(int r) {
	this->r = r;
}

int DIEMMAU3C::getR() {
	return r;
}

void DIEMMAU3C::setG(int g) {
	this->g = g;
}

int DIEMMAU3C::getG() {
	return g;
}

void DIEMMAU3C::setB(int b) {
	this->b = b;
}

int DIEMMAU3C::getB() {
	return b;
}

void DIEMMAU3C::setRGB(int r, int g, int b) {
	this->r = r;
	this->g = g;
	this->b = b;
}

void DIEMMAU3C::input() {
	DIEM3C::input();
	do {
		cout << "\nNhap mau R: "; cin >> r;
		if (r < 0 || r > 255) cout << "\nMau khong hop le.\n";
	} while (r < 0 || r > 255);
	do {
		cout << "\nNhap mau G: "; cin >> g;
		if (g < 0 || g > 255) cout << "\nMau khong hop le.\n";
	} while (g < 0 || g > 255);
	do {
		cout << "\nNhap mau B: "; cin >> b;
		if (b < 0 || b > 255) cout << "\nMau khong hop le.\n";
	} while (b < 0 || b > 255);
}

void DIEMMAU3C::display() {
	DIEMMAU3C::display();
	cout << "\n" << "R: " << r << ", G: " << g << ", B: " << b << "\n";
}

istream& operator>>(istream& is, DIEMMAU3C& CP) {
	CP.DIEM3C::input();
	do {
		cout << "\nNhap chi so mau R: "; is >> CP.r;
		if (CP.r < 0 || CP.r > 255) cout << "\nMau khong hop le.\n";
	} while (CP.r < 0 || CP.r > 255);
	do {
		cout << "Nhap chi so mau G: "; is >> CP.g;
		if (CP.g < 0 || CP.g > 255) cout << "\nMau khong hop le.\n";
	} while (CP.g < 0 || CP.g > 255);
	do {
		cout << "Nhap chi so mau B: "; is >> CP.b;
		if (CP.b < 0 || CP.b > 255) cout << "\nMau khong hop le.\n";
	} while (CP.b < 0 || CP.b > 255);

	return is;
}

ostream& operator<<(ostream& os, DIEMMAU3C CP) {
	CP.DIEM3C::display();
	os << "R: " << CP.r << ", G: " << CP.g << ", B: " << CP.b << "\n";
	return os;
}

bool DIEMMAU3C::isDuplicate(DIEMMAU3C CP) {
	return (*this).DIEM3C::isDuplicate(CP) && r == CP.r && g == CP.g && b == CP.b;
}

DIEMMAU3C::~DIEMMAU3C() {
	x = y = z = r = g = b = 0;
}