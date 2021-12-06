#include "CDate.h"
#include <iostream>
#include <string>
using namespace std;

CDate::CDate() {
	this->day = this->month = this->year = 1;
}

bool CDate::isDate(CDate D)
{
	int a[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (D.isLeapYear(D)) a[1] = 29;
	if (D.month < 1 || D.month > 12) return false;
	if (D.day < 1 || D.day > a[D.month - 1]) return false;
	return true;
}

bool CDate::isLeapYear(CDate D) {
	if ((D.year % 4 == 0 && D.year % 100 != 0) || (D.year % 4 != 0 && D.year % 100 == 0) || D.year % 400 == 0)
		return true;
	else return false;
}

int CDate::NoDayOfMonth(CDate D) {
	int total[2][12] = { {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
						 {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31} };
	int i;

	if (D.isLeapYear(D))
		i = 0;
	else i = 1;

	return total[i][month - 1];
}

CDate operator+(CDate& D, int d) {
	int d_temp = D.NoDayOfMonth(D);
	
	if (D.day + d > d_temp) {
		do {
			d_temp = D.NoDayOfMonth(D);
			D.month++;
			if (D.month > 12) {
				D.month = 1;
				D.year++;
			}
			d = d - (d_temp - D.day);
			D.day = 0;
		} while (D.day + d > d_temp);
	}
	D.day += d;

	return D;
}

CDate operator-(CDate& D, int d) {
	int d_temp = D.NoDayOfMonth(D);
	
	if (D.day <= d) {
		do {
			D.month--;
			if (D.month == 0) {
				D.month = 12;
				D.year--;
			}
			d_temp = D.NoDayOfMonth(D);
			d -= D.day;
			D.day = D.NoDayOfMonth(D);
		} while (D.day < d);
	}
	D.day -= d;

	return D;
}

CDate operator++(CDate& D) {
	switch (D.day) {
	case 30: {
		switch (D.month) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			D.day++;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			D.day = 1;
			D.month++;
			break;
		}
	}
	case 31:
		if (D.month == 12) {
			D.day = 1;
			D.month = 1;
			D.year++;
			break;
		}
	case 28:
		switch (D.month) {
		case 2:
			if (D.isLeapYear(D))
				D.day++;
			else {
				D.day = 1;
				D.month = 3;
			}
			break;
		default:
			D.day++;
			break;
		}
	case 29:
		switch (D.month) {
		case 2:
			D.day = 1;
			D.month = 3;
			break;
		default:
			D.day++;
		}
		break;
	default:
		D.day++;
		break;
	}

	return D;
}

CDate operator--(CDate& D) {
	D.day--;
	while (D.day <= 0) {
		D.month--;
		if (D.month <= 0) {
			D.year--;
			D.month += 12;
		}

		switch (D.month) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			D.month--;
			D.day += 31;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			D.month--;
			D.day += 30;
			break;
		case 2:
			if (D.isLeapYear(D)) {
				D.month--;
				D.day += 29;
				break;
			}
			else {
				D.month--;
				D.day += 28;
				break;
			}
			break;
		}
	}

	return D;
}

int CDate::DatePosition(CDate D) {
	if (D.month < 3) {
		D.year--;
		D.month += 12;
	}
	return 365 * D.year + D.year / 4 - D.year / 100 + D.year / 400 + (153 * D.month - 457) / 5 + D.day - 306;
}
int operator-(CDate d_temp, CDate D2) {
	return abs(d_temp.DatePosition(d_temp) - D2.DatePosition(D2));
}

istream& operator>>(istream& is, CDate& D)
{
	do {
		cout << "\nNgay: "; is >> D.day;
		cout << "Thang: "; is >> D.month;
		cout << "Nam: "; is >> D.year;
		if (!D.isDate(D)) cout << "\nNgay khong hop le. Moi ban nhap lai.\n";
	} while (!D.isDate(D));
	return is;
}

ostream& operator<<(ostream& os, CDate D) {
	string d = to_string(D.day);
	string m = to_string(D.month);
	string y = to_string(D.year);

	if (D.day < 10) d = "0" + d;
	if (D.month < 10) m = "0" + m;
	if (D.year < 10) y = "0" + y;

	os << d << "/" << m << "/" << y;
	return os;
}