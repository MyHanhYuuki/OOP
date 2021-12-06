#include <iostream>
#include <vector>
#include "MaTranVuong.h"
using namespace std;

MaTranVuong::MaTranVuong() {
	n = 0;
	p = NULL;
}

MaTranVuong::MaTranVuong(int d) {
	n = d;
	p = new int* [n];
	for (int i = 0; i < n; i++) {
		p[i] = new int[n];
	}
}

MaTranVuong::MaTranVuong(MaTranVuong& M) {
	n = M.n;
	p = new int* [n];
	for (int i = 0; i < n; i++) {
		p[i] = new int[n];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			p[i][j] = M.p[i][j];
		}
	}
}

MaTranVuong::~MaTranVuong() {
	n = 0;
	delete[] p;
	p = NULL;
}

void MaTranVuong::input() {
	cout << "\nNhap bac ma tran: "; cin >> n;
	p = new int* [n];
	for (int i = 0; i < n; i++) {
		p[i] = new int[n];
	}
	cout << "\nNhap cac phan tu ma tran:\n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << "[" << i + 1 << "][" << j + 1 << "]: ";
			cin >> p[i][j];
		}
	}
}

void MaTranVuong::display() {
	for (int i = 0; i < n; i++) {
		cout << "\t";
		for (int j = 0; j < n; j++) {
			cout << p[i][j] << "\t";
		}
		cout << "\n";
	}
}

void MaTranVuong::oddMainDiagonal() {
	int count = 0, max;
	vector<int> a;
	int* b;
	for (int i = 0; i < n; i++) {
		if (p[i][i] % 2 != 0) {
			a.push_back(p[i][i]);
			count++;
		}
	}

	if (count == 0) cout << "khong co";
	else {
		max = a[0];
		for (int i = 0; i < a.size(); i++) {
			if (max < a[i]) max = a[i];
		}
		b = new int[max + 1];
		for (int i = 0; i <= max; i++) {
			b[i] = 0;
		}
		for (int i = 0; i < a.size(); i++) {
			if (b[a[i]] == 0) {
				cout << a[i] << " ";
				b[a[i]]++;
			}
		}
	}
}

int MaTranVuong::end_3SubDiagonalCount() {
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (p[i][n - i - 1] % 10 == 3) count++;
	}
	return count;
}

bool MaTranVuong::isNegativeAboveMainDiagonal() {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (j >= i && p[i][j] < 0) return true;
		}
	}
	return false;
}

void MaTranVuong::firstEvenBelowMainDiagonal() {
	for (int i = 0; i < n; i++) {
		for (int j = n - 1; j < n; j++) {
			if (p[i][j] % 2 == 0) {
				cout << "\nPhan tu chan dau tien o nua duoi duong cheo phu: " << p[i][j];
				return;
			}
		}
	}
	cout << "\nKhong co phan tu nao la so chan o nua duoi duong cheo phu.";
}

void MaTranVuong::decreasingSubDiagonal() {
	vector<int> s;
	int i = 0, j = n - 1;
	
	while (i < n && j >= 0) {
		s.push_back(p[i][j]);
		i++;
		j--;
	}

	for (int i = 0; i < s.size() - 1; i++) {
		for (int j = 1; j < s.size(); j++) {
			if (s[i] < s[j]) swap(s[i], s[j]);
		}
	}

	for (int i = 0; i < s.size(); i++) {
		cout << s[i] << " ";
	}
}