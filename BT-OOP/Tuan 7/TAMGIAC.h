#pragma once
#ifndef TG
#define TG
#include <iostream>
#include "DIEM.h"
using namespace std;

class TAMGIAC
{
private:
	DIEM A, B, C;
	static int count;

public:
	TAMGIAC();
	TAMGIAC(double, double, double, double, double, double);
	TAMGIAC(DIEM, DIEM, DIEM);
	~TAMGIAC();
	void SetA(DIEM);
	void SetB(DIEM);
	void SetC(DIEM);
	DIEM GetA();
	DIEM GetB();
	DIEM GetC();
	int getCount();
	double Perimeter();
	double Area();
	bool isTriangle();
	void Classify();
	void Relocate(double, double);
	friend istream& operator>>(istream&, TAMGIAC&);
	friend ostream& operator<<(ostream&, TAMGIAC);
};

#endif