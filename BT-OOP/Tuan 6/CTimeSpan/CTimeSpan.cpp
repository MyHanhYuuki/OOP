#include "CTimeSpan.h"
#include <iostream>
#include <string>
using namespace std;

CTimeSpan::CTimeSpan() {
	this->hour = this->minute = this->second = 0;
}

CTimeSpan operator+(CTimeSpan T1, CTimeSpan T2) {
	CTimeSpan T;

	T.second = T1.second + T2.second;
	T.minute = T1.minute + T2.minute;
	T.hour = T1.hour + T2.hour;

	if (T.second >= 60) {
		T.minute++;
		T.second -= 60;
	}

	if (T.minute >= 60) {
		T.hour++;
		T.minute -= 60;
	}

	return T;
}

CTimeSpan operator-(CTimeSpan T1, CTimeSpan T2) {
	CTimeSpan T;

	T.second = T1.second - T2.second;
	T.minute = T1.minute - T2.minute;
	T.hour = T1.hour - T2.hour;

	if (T.second <= 0) {
		T.minute--;
		T.second += 60;
	}

	if (T.minute <= 0) {
		T.hour--;
		T.minute += 60;
	}

	T.hour = abs(T.hour);

	return T;
}

istream& operator>>(istream& is, CTimeSpan& T) {
	cout << "\nHour = ";
	is >> T.hour;
	cout << "Minute = ";
	is >> T.minute;
	cout << "Second = ";
	is >> T.second;

	while (T.second >= 60) {
		T.minute++;
		T.second -= 60;
	}
	while (T.minute >= 60) {
		T.hour++;
		T.minute -= 60;
	}

	return is;
}

ostream& operator<<(ostream& os, CTimeSpan T) {
	string hour = to_string(abs(T.hour));
	string minute = to_string(T.minute);
	string second = to_string(T.second);

	if (T.hour < 10) hour = "0" + hour;
	if (T.minute < 10) minute = "0" + minute;
	if (T.second < 10) second = "0" + second;
	cout << hour << ":" << minute << ":" << second;

	return os;
}

bool operator==(CTimeSpan T1, CTimeSpan T2) {
	if (T1.hour == T2.hour && T1.minute == T2.minute && T1.second == T2.second) return true;
	else return false;
}

bool operator!=(CTimeSpan T1, CTimeSpan T2) {
	if (T1.hour == T2.hour && T1.minute == T2.minute && T1.second == T2.second) return false;
	else return true;
}

bool operator<(CTimeSpan T1, CTimeSpan T2) {
	if (T1.hour < T2.hour && T1.minute < T2.minute && T1.second < T2.second) return true;
	else return false;
}

bool operator>(CTimeSpan T1, CTimeSpan T2) {
	if (T1.hour < T2.hour && T1.minute < T2.minute && T1.second < T2.second) return false;
	else return true;
}

bool operator<=(CTimeSpan T1, CTimeSpan T2) {
	if (T1.hour <= T2.hour && T1.minute <= T2.minute && T1.second <= T2.second) return true;
	else return false;
}

bool operator>=(CTimeSpan T1, CTimeSpan T2) {
	if (T1.hour <= T2.hour && T1.minute <= T2.minute && T1.second <= T2.second) return false;
	else return true;
}