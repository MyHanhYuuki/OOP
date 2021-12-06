#pragma once
#include <iostream>
using namespace std;

class CTime
{
private:
	int hour, minute, second;

public:
	CTime();
	friend CTime operator+(CTime, CTime);
	friend CTime operator-(CTime, CTime);
	friend void operator++(CTime&);
	friend void operator--(CTime&);
	friend istream& operator>>(istream&, CTime&);
	friend ostream& operator<<(ostream& os, CTime);
};

