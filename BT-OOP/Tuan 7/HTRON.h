#pragma once
#ifndef CIR
#define CIR
#include "DIEM.h"
#include <iostream>
using namespace std;

class HTRON
{
private:
	DIEM I;
	double r;
	static int count;
	
public:
	HTRON();
	HTRON(DIEM, double);
	~HTRON();
	void SetI(DIEM);
	void SetR(double);
	DIEM GetI();
	double GetR();
	int getCount();
	double Perimeter();
	double Area();
	void Relocate(double, double);
	friend istream& operator>>(istream&, HTRON&);
	friend ostream& operator<<(ostream&, HTRON);
};

#endif