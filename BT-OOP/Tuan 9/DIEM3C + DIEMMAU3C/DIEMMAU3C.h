#pragma once
#include "DIEM3C.h"

class DIEMMAU3C :public DIEM3C
{
protected:
	int r, g, b;

public:
	DIEMMAU3C(double = 0, double = 0, double = 0, int = 0, int = 0, int = 0);
	~DIEMMAU3C();
	void setR(int);
	int getR();
	void setG(int);
	int getG();
	void setB(int);
	int getB();
	void setRGB(int, int, int);
	void input();
	void display();
	bool isDuplicate(DIEMMAU3C);
	friend istream& operator>>(istream& is, DIEMMAU3C&);
	friend ostream& operator<<(ostream& is, DIEMMAU3C);
};