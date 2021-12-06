#pragma once
#ifndef HCN
#include "DIEM.h"
using namespace std;

class HCN
{
private:
	DIEM A, B;
	static int count;

public:
	HCN();
	HCN(double, double, double, double);
	HCN(DIEM, DIEM);
	~HCN();
	void SetA(DIEM);
	void SetB(DIEM);
	DIEM GetA();
	DIEM GetB();
	int getCount();
	double Perimeter();
	double Area();
	bool isRectangle();
	void Relocate(double, double);
	friend istream& operator>>(istream&, HCN&);
	friend ostream& operator<<(ostream&, HCN);
};

#endif