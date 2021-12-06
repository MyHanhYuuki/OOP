#include <iostream>
#include <string>
#include "CDate.h"
using namespace std;

CDate::CDate() {
	this->day = this->month = this->year = 1;
}

int DayCount(int year) {
	if ((year % 4 == 0 && year % 100 != 0) || (year % 4 != 0 && year % 100 == 0) || year % 400 == 0)
		return 366;
	else return 365;
}

bool CDate::isDate()
{
	int a[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if ((year % 4 == 0 && year % 100 != 0) || (year % 4 != 0 && year % 100 == 0) || year % 400 == 0) a[1] = 29;
	if (month < 1 || month > 12) return false;
	if (day < 1 || day > a[month - 1]) return false;
	return true;
}

int CDate::positionInAYear() {
	int total[2][12] = { {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
						 {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31} };
	int i;
	int s = day;

	if ((year % 4 == 0 && year % 100 != 0) || (year % 4 != 0 && year % 100 == 0) || year % 400 == 0)
		i = 0;
	else i = 1;
	for (int j = 0; j < month - 1; j++)  s += total[i][j];

	return s;
}

void CDate::positionInAMonth(CDate& D, int pos) {
	int total[2][12] = { {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
						 {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31} };
	int i;

	if ((D.year % 4 == 0 && D.year % 100 != 0) || (D.year % 4 != 0 && D.year % 100 == 0) || D.year % 400 == 0)
		i = 0;
	else i = 1;

	for (int j = 0; pos > total[i][j]; j++) {
		
		pos -= total[i][j];
		D.month++;
	}

	D.day = pos;
}

CDate CDate::add(CDate& D, int d) {
	int dtemp;

	if (d <= (DayCount(D.year) - D.positionInAYear())) {
		dtemp = D.positionInAYear() + d;
		D.positionInAMonth(D, dtemp);
		return D;
	}

	dtemp = d - (DayCount(D.year) - D.positionInAYear());

	while (dtemp > DayCount(D.year)) {
		dtemp -= DayCount(D.year);
		D.year++;
	}
	D.month = 1;
	D.positionInAMonth(D, dtemp);

	return D;
}

CDate CDate::minus(CDate& D, int d) {
	int dtemp;

	if (d <= D.positionInAYear()) {
		dtemp = D.positionInAYear() - d;
		D.positionInAMonth(D, dtemp);
		return D;
	}

	dtemp = d - D.positionInAYear();

	while (dtemp > DayCount(D.year)) {
		dtemp -= DayCount(D.year);
		D.year--;
	}
	D.month = 1;
	D.positionInAMonth(D, dtemp);

	return D;
}

CDate CDate::add1Day(CDate& D) {
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
			if ((D.year % 4 == 0 && D.year % 100 != 0) || (D.year % 4 != 0 && D.year % 100 == 0) || D.year % 400 == 0)
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

CDate CDate::minus1Day(CDate& D) {
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
			if ((D.year % 4 == 0 && D.year % 100 != 0) || (D.year % 4 != 0 && D.year % 100 == 0) || D.year % 400 == 0) {
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

int CDate::distance(CDate D1, CDate D2) {
	int d1 = D1.positionInAYear();
	int d2 = D2.positionInAYear();

	if (D1.year == D2.year) return abs(d2 - d1);

	int s = 0;
	if (D1.year < D2.year) {
		d1 = DayCount(D1.year) - d1;
		for (int i = D1.year + 1; i < D2.year; i++) s += DayCount(i);
		return d1 + s + d2;
	}
	else {
		d2 = DayCount(D2.year) - d2;
		for (int i = D2.year + 1; i < D1.year; i++) s += DayCount(i);
		return d1 + s + d2;
	}
}

void CDate::input(CDate& D) {
	do {
		cout << "\nNgay: "; cin >> D.day;
		cout << "Thang: "; cin >> D.month;
		cout << "Nam: "; cin >> D.year;
		if (!D.isDate()) cout << "\nNgay khong hop le. Moi ban nhap lai.\n";
	} while (!D.isDate());
}

void CDate::display(CDate D) {
	string d = to_string(D.day);
	string m = to_string(D.month);
	string y = to_string(D.year);

	if (D.day < 10) d = "0" + d;
	if (D.month < 10) m = "0" + m;
	if (D.year < 10) y = "0" + y;

	cout << d << "/" << m << "/" << y;
}