#include <iostream>
#include "MultiplicationTable.h"
using namespace std;

void MultiplicationTable::Set() {
	this->n = n;
	this->m = m;
	if (n > 2 || n < 9 || m > 2 || m < 9) cout << "\nNgoai pham vi cho phep.";
}

void MultiplicationTable::Get(MultiplicationTable& b) {
	do {
		cout << "\nNhap n: ";
		cin >> this->n;
		cout << "Nhap m: ";
		cin >> this->m;
		if (n < 2 || n > 9 || m < 2 || m > 9) cout << "\nNgoai pham vi cho phep. Moi ban nhap lai.";
	} while (n < 2 || n > 9 || m < 2 || m > 9);
}

void MultiplicationTable::MT_n(MultiplicationTable b) {
	cout << "\n---------------------------------------------------------" << endl;
	cout << "\nBang cuu chuong " << n << ":" << endl;
	for (int i = 1; i <= 10; i++) {
		cout << n << " x " << i << " = " << n * i << endl;
	}
}

void MultiplicationTable::MT_nm(MultiplicationTable b) {
	if (n == m) {
		b.MT_n(b);
	}
	else {
		if (n < m) {
			for (int i = n; i <= m; i++) {
				cout << "\n---------------------------------------------------------" << endl;
				cout << "\nBang cuu chuong " << i << ":" << endl;
				for (int j = 1; j <= 10; j++) {
					cout << i << " x " << j << " = " << i * j << endl;
				}
			}
		}
		else {
			if (n > m) {
				for (int i = n; i >= m; i--) {
					cout << "\n---------------------------------------------------------" << endl;
					cout << "\nBang cuu chuong " << i << ":" << endl;
					for (int j = 1; j <= 10; j++) {
						cout << i << " x " << j << " = " << i * j << endl;
					}
				}
			}
		}
	}
}

void MultiplicationTable::MT() {
	for (int i = 2; i <= 9; i++) {
		cout << "\n---------------------------------------------------------" << endl;
		cout << "\nBang cuu chuong " << i << ":" << endl;
		for (int j = 1; j <= 10; j++) {
			cout << i << " x " << j << " = " << i * j << endl;
		}
	}
}