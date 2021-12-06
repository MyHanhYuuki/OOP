#include "Regular_Staff.h"
#include <iostream>
using namespace std;

Regular_Staff::Regular_Staff(string id, string n, string d, int t, double wc, double pac) :Staff(id, n, d, 1), wage_coef(wc), pa_coef(pac) {}

void Regular_Staff::input() {
	Staff::input();
	type = 1;
	cout << "Nhap he so luong: "; cin >> wage_coef;
	cout << "Nhap he so phu cap chuc vu: "; cin >> pa_coef;
}

void Regular_Staff::display() {
	Staff::display();
	cout << "\nHe so luong: " << wage_coef << "\nHe so phu cap chuc vu: " << pa_coef << "\nLuong: " << wageCal();
}

double Regular_Staff::wageCal() {
	return (1 + wage_coef + pa_coef) * 1000;
}