#pragma once
#include <iostream>
using namespace std;

class MAU
{
protected:
	int r, g, b;

public:
	MAU(int = 0, int = 0, int = 0);
	~MAU();
	void setR(int);
	int getR();
	void setG(int);
	int getG();
	void setB(int);
	int getB();
	void setRGB(int, int, int);
	void input();
	void display();
	bool isDuplicate(MAU);
	friend istream& operator>>(istream& is, MAU&);
	friend ostream& operator<<(ostream& is, MAU);
	friend bool operator==(MAU, MAU);
};

