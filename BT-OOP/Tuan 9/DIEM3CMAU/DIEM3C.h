#pragma once
#include <iostream>
#include "DIEM3C.h"
#include "MAU.h"
using namespace std;
class DIEM3C
{
protected:
	double x, y, z;

public:
	DIEM3C(double = 0, double = 0, double = 0);
	~DIEM3C();
	void input();
	void display();
	void setXYZ(double, double, double);
	bool isDuplicate(DIEM3C);
	friend istream& operator>>(istream&, DIEM3C&);
	friend ostream& operator<<(ostream&, DIEM3C);

};