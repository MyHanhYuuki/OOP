#include <iostream>
#include <string>
#include "CTime.h"
using namespace std;

CTime::CTime() {
	this->hour = this->minute = this->second = 0;
}

bool CTime::lessThan(CTime T1, CTime T2) {
	if (T1.hour < T2.hour) return true;
	else if (T1.hour == T2.hour && T1.minute < T2.minute) return true;
	else if (T1.hour == T2.hour && T1.minute == T2.minute && T1.second < T2.second) return true;
	else return false;
}

CTime CTime::add(CTime T1, CTime T2) {
	CTime T;
	if (lessThan(T1, T2)) return T;
	T.second = T1.second + T2.second;
	T.minute = T1.minute + T2.minute;
	T.hour = T1.hour + T2.hour;

	while (T.second >= 60) {
		T.minute++;
		T.second -= 60;
	}

	while (T.minute >= 60) {
		T.hour++;
		T.minute -= 60;
	}

	return T;
}

CTime CTime::minus(CTime T1, CTime T2) {
	CTime T;

	T.second = T1.second - T2.second;
	T.minute = T1.minute - T2.minute;
	T.hour = T1.hour - T2.hour;

	while (T.second < 0) {
		T.minute--;
		T.second += 60;
	}

	while (T.minute < 0) {
		T.hour--;
		T.minute += 60;
	}

	return T;
}

CTime CTime::add1Sec(CTime& T) {
	T.second++;
	while (T.second >= 60)
	{
		T.minute++;
		T.second -= 60;
	}
	while (T.minute >= 60) {
		T.hour++;
		T.minute -= 60;
	}

	return T;
}

CTime CTime::minus1Sec(CTime& T) {
	T.second--;
	while (T.second < 0)
	{
		T.minute--;
		T.second += 60;
	}
	while (T.minute <= 0) {
		T.hour--;
		T.minute += 60;
	}

	return T;
}

void CTime::input(CTime& T) {
	do {
		cout << "\nGio = ";
		cin >> T.hour;
		cout << "Phut = ";
		cin >> T.minute;
		cout << "Giay = ";
		cin >> T.second;
		if (T.hour < 0 || T.minute < 0 || T.second < 0) cout << "\nThoi gian khong hop le. Moi nhap lai.\n";
	} while (T.hour < 0 || T.minute < 0 || T.second < 0);

	while (T.second >= 60) {
		T.minute++;
		T.second -= 60;
	}
	while (T.minute >= 60) {
		T.hour++;
		T.minute -= 60;
	}
}

void CTime::display(CTime T) {
	string hour = to_string(T.hour);
	string minute = to_string(T.minute);
	string second = to_string(T.second);

	if (T.hour < 10) hour = "0" + hour;
	if (T.minute < 10) minute = "0" + minute;
	if (T.second < 10) second = "0" + second;
	cout << hour << ":" << minute << ":" << second;
}