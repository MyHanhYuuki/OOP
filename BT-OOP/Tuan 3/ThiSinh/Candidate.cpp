#include "Candidate.h"
#include <iostream>
#include <string>
using namespace std;

void Candidate::setName() {
	cin.ignore();
	getline(cin, name);
}

void Candidate::setId() {
	cin >> this->id;
}

void Candidate::setDOB() {
	do {
		cout << "\nNgay: "; cin >> day;
		cout << "Thang: "; cin >> month;
		cout << "Nam: "; cin >> year;
		if (checkDate(day, month, year) == false) cout << "\nNgay khong hop le. Moi nhap lai.\n";
	} while (checkDate(day, month, year) == false);
}


bool Candidate::checkDate(int day, int month, int year) {
	if (day <= 0 || day > 31 || month <= 0 || month > 12 || year <= 0) {
		return false;
	}

	switch (month) {
	case 2:
		if (day > 29) {
			return false;
		}
		else {
			if (day == 29 && (year % 4 != 0 && year % 100 != 0 && year % 400 != 0)) {
				return false;
			}
		}
	case 4:
	case 6:
	case 9:
	case 11:
		if (day > 30) {
			return false;
		}
	default:
		break;
	}

	return true;
}

void Candidate::setMath() {
	cin >> this->math;
}

void Candidate::setLiterature() {
	cin >> this->literature;
}

void Candidate::setEnglish() {
	cin >> this->english;
}

void Candidate::displayInfo() {
	cout << "\nMa so: " << id;
	cout << "\nHo va ten: " << name;
	cout << "\nNgay sinh: " << day << "/" << month << "/" << year;
	cout << "\nDiem Toan: " << math;
	cout << "\nDiem Van: " << literature;
	cout << "\nDiem Anh: " << english;
}

void Candidate::higherThan15() {
	if ((math + literature + english) > 15) displayInfo();
}