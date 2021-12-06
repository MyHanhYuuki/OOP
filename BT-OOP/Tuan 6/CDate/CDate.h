#ifndef CDT
#define CDT
#include <iostream>
using namespace std;

class CDate
{
private:
	int day, month, year;

public:
	CDate();
	int DatePosition(CDate);
	int NoDayOfMonth(CDate);
	bool isDate(CDate);
	bool isLeapYear(CDate);
	friend CDate operator+(CDate&, int);
	friend CDate operator-(CDate&, int);
	friend int operator-(CDate, CDate);
	friend CDate operator++(CDate&);
	friend CDate operator--(CDate&);
	friend istream& operator>>(istream&, CDate&);
	friend ostream& operator<<(ostream&, CDate);
};

#endif