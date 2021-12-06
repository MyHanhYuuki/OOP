#pragma once
#include "DIEM.h"

class DIEM3C :public DIEM
{
protected:
	double z;

public:
	DIEM3C(double = 0, double = 0, double = 0);
	~DIEM3C();
	void setZ(double);
	double getZ();
	void input();
	void display();
	double distance(DIEM3C);
	bool isTriangle(DIEM3C, DIEM3C, DIEM3C);
	double perimeter(DIEM3C, DIEM3C, DIEM3C);
	double area(DIEM3C, DIEM3C, DIEM3C);
	DIEM3C symmetry();
	void relocate(double, double, double);
	bool isDuplicate(DIEM3C);
	friend istream& operator>>(istream&, DIEM3C&);
	friend ostream& operator<<(ostream&, DIEM3C);

};