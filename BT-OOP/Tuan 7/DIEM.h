#pragma once
#ifndef PNT
#define PNT
#include <iostream>
using namespace std;

class DIEM
{
private:
	double x, y;

public:
	DIEM();
	DIEM(double, double);
	double GetX();
	double GetY();
	void SetXY(double, double);
	double Distance(DIEM);
	void Move(double, double);
	friend ostream& operator<<(ostream&, DIEM);
	friend istream& operator>>(istream&, DIEM&);
};

#endif