#include "Staff.h"
#include <iostream>
using namespace std;

Staff::Staff(string id, string n, string d, int t) :idnum(id), name(n), department(d), type(t) {}

void Staff::input() {
	cin.ignore();
	cout << "Nhap ma so: "; getline(cin, idnum);
	cout << "Nhap ho ten: "; getline(cin, name);
	cout << "Nhap phong ban: "; getline(cin, department);
}

void Staff::display() {
	cout << "MS: " << idnum << "\nTen: " << name << "\nPhong ban: " << department << "\n" << (type == 1 ? "Nhan vien bien che" : (type == 2 ? "Nhan vien hop dong" : "N/A"));
}

void Staff::setName(string n) {
	name = n;
}

void Staff::setIDnum(string id) {
	idnum = id;
}