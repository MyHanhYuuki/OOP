#include <iostream>
#include <string>
#include "CTime.h"
using namespace std;

CTime::CTime() {
	this->hour = this->minute = this->second = 0;
}

CTime operator+(CTime T1, CTime T2) {
	CTime T;

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

CTime operator-(CTime T1, CTime T2) {
	CTime T;

	T.second = T1.second - T2.second;
	T.minute = T1.minute - T2.minute;
	T.hour = T1.hour - T2.hour;

	while (T.second <= 0) {
		T.minute--;
		T.second += 60;
	}

	while (T.minute <= 0) {
		T.hour--;
		T.minute += 60;
	}

	return T;
}

void operator++(CTime& T){
	T.second++;
	while (T.second >= 60)
	{
		T.minute++;
		T.second -= 60;
	}
}

void operator--(CTime& T) {
	T.second--;
	while (T.second <= 0)
	{
		T.minute--;
		T.second += 60;
	}
}

istream& operator>>(istream& is, CTime& T) {
	cout << "\nGio = ";
	is >> T.hour;
	cout << "Phut = ";
	is >> T.minute;
	cout << "Giay = ";
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

ostream& operator<<(ostream& os, CTime T) {
	string hour = to_string(abs(T.hour));
	string minute = to_string(T.minute);
	string second = to_string(T.second);
	
	if (T.hour < 10) hour = "0" + hour;
	if (T.minute < 10) minute = "0" + minute;
	if (T.second < 10) second = "0" + second;
	cout << hour << ":" << minute << ":" << second;
	return os;
}