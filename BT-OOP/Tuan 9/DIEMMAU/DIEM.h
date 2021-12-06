#pragma once
#include <iostream>
using namespace std;

class DIEM
{
protected:
	double x, y;

public:
	DIEM(double = 0, double = 0);
	~DIEM();
	double getX();
	double getY();
	void setXY(double, double);
	void input();
	void display();
	bool isDuplicate(DIEM);
	friend ostream& operator<<(ostream&, DIEM);
	friend istream& operator>>(istream&, DIEM&);
};