#include<iostream>
#include <cmath>
#include "SoPhuc.h"
using namespace std;

int main() {
	SOPHUC x, y;
	int n;
	int a = 0;
	int* p = &a;
	do {
		cout << "--------------------------------------" << endl;
		cout << "1. Nhap 2 so phuc." << endl;
		cout << "2. Xuat 2 so phuc." << endl;
		cout << "3. Tinh tong." << endl;
		cout << "4. Tinh hieu." << endl;
		cout << "5. Tinh tich." << endl;
		cout << "6. Tinh thuong." << endl;
		cout << "0. Thoat CT" << endl;
		cout << "--------------------------------------" << endl;
		cout << "Nhap lenh can thuc hien: ";
		cin >> n;
		switch (n) {
		case 1: {
			x.nhap();
			y.nhap();
			*p = 1;
			break;}
		case 2: {
			if (*p == 0) {
				cout << "Chua nhap so phuc" << endl;
				break;
			}
			else {
				cout << "Phan so thu nhat: ";
				x.xuat();
				cout << endl;
				cout << "Phan so thu hai: ";
				y.xuat();
				cout << endl;
				break;
			}
			break;}
		case 3: {
			if (*p == 0) {
				cout << "Chua nhap so phuc" << endl;
				break;
			}
			else {
				x.cong(y);
				break;
			}}
		case 4: {
			if (*p == 0) {
				cout << "Chua nhap so phuc" << endl;
				break;
			}
			else {
				x.tru(y);
				cout << endl;
				break;
			}	}
		case 5: {
			if (*p == 0) {
				cout << "Chua nhap so phuc" << endl;
				break;
			}
			else {
				x.tich(y);
				cout << endl;
				break;
			}
		}
		case 6: {
			if (*p == 0) {
				cout << "Chua nhap so phuc" << endl;
				break;
			}
			else {
				x.thuong(y);
				cout << endl;
				break;
			}
		}
		}		
	} while (n != 0);
	return 0;
}