#include "Contract_Staff.h"
#include <iostream>
using namespace std;

Contract_Staff::Contract_Staff(string id, string n, string d, int t, double p, double wd, double oc) :Staff(id, n, d, t), payment(p), workday(wd), overtime_coef(oc) {}

void Contract_Staff::input() {
	Staff::input();
	type = 2;
	cout << "Nhap tien cong: "; cin >> payment;
	do {
		cout << "Nhap so ngay cong: "; cin >> workday;
		if (workday < 0) cout << "\nSo ngay cong khong the be hon 0.\n";
	} while (workday < 0);
	cout << "Nhap he so vuot gio: "; cin >> overtime_coef;
}

void Contract_Staff::display() {
	Staff::display();
	cout << "\nTien cong: " << payment << "\nSo ngay cong: " << workday << "\nHe so vuot gio: " << overtime_coef << "\nTien luong: " << wageCal();
}

double Contract_Staff::wageCal() {
	return payment * workday * (1 + overtime_coef);
}