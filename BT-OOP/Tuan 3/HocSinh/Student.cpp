#include "Student.h"
#include <iostream>
using namespace std;

Student::Student() {
	this->name = ' ';
	this->literature = 0;
	this->math = 0;
	this->avg = 0;
}

Student::Student(string name, double literature, double math) {
	this->name = name;
	this->literature = literature;
	this->math = math;
}

void Student::getInfo() {
	cout << "\nNhap ho ten hoc sinh: ";
	cin.ignore();
	getline(cin, name);
	cout << "Nhap diem Van: "; cin >> literature;
	cout << "Nhap diem Toan: "; cin >> math;
	avg = Average();
	rank = Placement();
}

string Student::Placement() {
	if (avg < 5) return "Yeu";
	if (avg < 6.5) return "Trung Binh";
	if (avg < 8) return "Kha";
	return "Gioi";
}

void Student::display() {
	cout << "\nHo va ten: " << name;
	cout << "\nDiem Van: " << literature;
	cout << "\nDiem Toan: " << math;
	cout << "\nDiem trung binh: " << avg;
	cout << "\nXep loai: " << rank;
}

double Student::Average() {
	return (literature + math) / 2.0;
}