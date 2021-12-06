#pragma once
#include <iostream>
using namespace std;

class DIEM {
private:
	double x, y;
public:
	DIEM();
	DIEM(double, double);
	void SetX(double);
	void SetY(double);
	double GetX();
	double GetY();
	void Move(double, double);
	friend ostream& operator << (ostream&,const DIEM);
	friend istream& operator >> (istream&, DIEM&);
};
