#include <iostream>
#include "Header.h"

using namespace std;

PhanSo::PhanSo(int a, int b) {
	tu = a;
	mau = b;
}

PhanSo::PhanSo(int a) {
	tu = a;
	mau = 1;
}

PhanSo operator+(PhanSo const& a, PhanSo const& b) {
	PhanSo s(a.tu*b.mau + b.tu*a.mau, a.mau * b.mau);

	return s;
}

PhanSo operator-(PhanSo const& a, PhanSo const& b) {
	PhanSo s(a.tu * b.mau - b.tu * a.mau, a.mau * b.mau);

	return s;
}

PhanSo operator*(PhanSo const& a, PhanSo const& b) {
	PhanSo s(a.tu*b.tu, a.mau*b.mau);
	
	return s;
}

PhanSo operator/(PhanSo const& a, PhanSo const& b) {
	PhanSo s(a.tu * b.mau, a.mau * b.tu);
	
	return s;
}

void operator==(PhanSo &a, PhanSo &b) {
	if (a.thapphan() == b.thapphan())
	{
		cout << "Dung" << endl;
	}
	else {
		cout << "Sai" << endl;
	}
}

void operator!=(PhanSo& a, PhanSo& b) {
	if (a.thapphan() != b.thapphan())
	{
		cout << "Dung" << endl;
	}
	else {
		cout << "Sai" << endl;
	}
}

void operator>(PhanSo& a, PhanSo& b) {
	if (a.thapphan() > b.thapphan())
	{
		cout << "Dung" << endl;
	}
	else {
		cout << "Sai" << endl;
	}
}

void operator>=(PhanSo& a, PhanSo& b) {
	if (a.thapphan() >= b.thapphan())
	{
		cout << "Dung" << endl;
	}
	else {
		cout << "Sai" << endl;
	}
}

void operator<(PhanSo& a, PhanSo& b) {
	if (a.thapphan() < b.thapphan())
	{
		cout << "Dung" << endl;
	}
	else {
		cout << "Sai" << endl;
	}
}

void operator<=(PhanSo& a, PhanSo& b) {
	if (a.thapphan() <= b.thapphan())
	{
		cout << "Dung" << endl;
	}
	else {
		cout << "Sai" << endl;
	}
}

double PhanSo::thapphan() {
	return (this->tu * 1.0 / this->mau);
}

ostream& operator<<(ostream& os, const PhanSo& a) {
	PhanSo b = a;
	b.rutgon();
	if (b.mau < -1)
		os << -b.tu << "/" << -b.mau;
	else if (b.mau == -1)
		os << -b.tu;
	else if (b.mau == 1)
		os << b.tu;
	else if (b.mau > 1)
		os << b.tu << "/" << b.mau;
	return os;
}

istream& operator>>(istream& is, PhanSo&a) {
	cout << "Nhap tu so: "; is >> a.tu;
	do {
		cout << "Nhap mau so: "; is >> a.mau;
		if (a.mau == 0) cout << "Mau phai khac khong" << endl;
	} while (a.mau == 0);
	a.rutgon();
	return is;
}

void PhanSo::rutgon() {
	int x = this->tu, y = this->mau;
	x = abs(x);
	y = abs(y);
	while (x != y) {
		if (x > y)
			x = x - y;
		else
			y = y - x;
	}
	int z = x;
	this->tu = this->tu / z;
	this->mau = this->mau / z;
}