#pragma once
#include <iostream>
#include "DIEM3C.h"
#include "MAU.h"
using namespace std;

class DIEM3CMAU :public DIEM3C, public MAU
{
public:
	DIEM3CMAU(double = 0, double = 0, double = 0, int = 0, int = 0, int = 0);
	~DIEM3CMAU();
	void input();
	void display();
	bool isDuplicate(DIEM3CMAU);
	friend istream& operator>>(istream&, DIEM3CMAU&);
	friend ostream& operator<<(ostream&, DIEM3CMAU);
	friend bool operator==(DIEM3CMAU, DIEM3CMAU);
};

