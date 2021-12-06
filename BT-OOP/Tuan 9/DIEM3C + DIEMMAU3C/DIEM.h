#pragma once
#include <iostream>
using namespace std;
class DIEM
{
protected:
	double x, y;

public:
	~DIEM();
	DIEM(double = 0, double = 0);
	double getX();
	double getY();
	void SetXY(double, double);
	void input();
	void display();
	bool isDuplicate(DIEM);
	friend ostream& operator<<(ostream&, DIEM);
	friend istream& operator>>(istream&, DIEM&);
};