#include "MAU.h"
using namespace std;

MAU::MAU(int r, int g, int b) {
	this->r = r;
	this->g = g;
	this->b = b;
}

void MAU::setR(int r) {
	this->r = r;
}

int MAU::getR() {
	return r;
}

void MAU::setG(int g) {
	this->g = g;
}

int MAU::getG() {
	return g;
}

void MAU::setB(int b) {
	this->b = b;
}

int MAU::getB() {
	return b;
}

void MAU::setRGB(int r, int g, int b) {
	this->r = r;
	this->g = g;
	this->b = b;
}

void MAU::input() {
	do {
		cout << "\nNhap chi so mau R: "; cin >> r;
		if (r < 0 || r > 255) cout << "\nMau khong hop le.\n";
	} while (r < 0 || r > 255);
	do {
		cout << "Nhap chi so mau G: "; cin >> g;
		if (g < 0 || g > 255) cout << "\nMau khong hop le.\n";
	} while (g < 0 || g > 255);
	do {
		cout << "Nhap chi so mau B: "; cin >> b;
		if (b < 0 || b > 255) cout << "\nMau khong hop le.\n";
	} while (b < 0 || b > 255);
}

void MAU::display() {
	cout << "Mau RGB: (" << r << ", " << g << ", " << b << ")";
}

istream& operator>>(istream& is, MAU& CP) {
	CP.input();
	return is;
}

ostream& operator<<(ostream& os, MAU CP) {
	CP.display();
	return os;
}

bool MAU::isDuplicate(MAU C) {
	return r == C.r && g == C.g && b == C.b;
}

bool operator==(MAU CP1, MAU CP2) {
	return CP1.r == CP2.r && CP1.g == CP2.g && CP1.b == CP2.b;
}

MAU::~MAU() {
	r = g = b = 0;
}