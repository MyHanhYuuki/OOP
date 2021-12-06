#include <iostream>
#include <vector>
#include "MaTran.h"
using namespace std;

MaTran::MaTran() {
	sd = sc = 0;
	p = NULL;
}

MaTran::MaTran(int r, int c) {
	sd = r;
	sc = c;
	p = new int*[sd];
	for (int i = 0; i < sd; i++) {
		p[i] = new int[sc];
	}
}

MaTran::MaTran(MaTran& M) {
	sd = M.sd;
	sc = M.sc;
	p = new int*[sd];
	for (int i = 0; i < sd; i++) {
		p[i] = new int[sc];
	}
	for (int i = 0; i < sd; i++) {
		for (int j = 0; j < sc; j++) {
			p[i][j] = M.p[i][j];
		}
	}
}

MaTran::~MaTran() {
	sd = sc = 0;
	delete[] p;
	p = NULL;
}

void MaTran::input() {
	cout << "\nNhap so hang ma tran: "; cin >> sd;
	p = new int*[sd];
	cout << "Nhap so cot ma tran: "; cin >> sc;
	for (int i = 0; i < sd; i++) {
		p[i] = new int[sc];
	}
	cout << "\nNhap cac phan tu ma tran:\n";
	for (int i = 0; i < sd; i++) {
		for (int j = 0; j < sc; j++) {
			cout << "[" << i + 1 << "][" << j + 1 << "]: ";
			cin >> p[i][j];
		}
	}
}

void MaTran::display() {
	for (int i = 0; i < sd; i++) {
		cout << "\t";
		for (int j = 0; j < sc; j++) {
			cout << p[i][j] << "\t";
		}
		cout << "\n";
	}
}

bool MaTran::isPrime(int n) {
	if (n <= 1) return false;
	for (int i = 2; i <= n / 2; i++) {
		if (n % i == 0) return false;
	}
	return true;
}

void MaTran::displayPrime() {
	int count = 0, max;
	vector<int> a;
	int* b;

	for (int i = 0; i < sd; i++) {
		for (int j = 0; j < sc; j++) {
			if (isPrime(p[i][j])) {
				a.push_back(p[i][j]);
				count++;
			}
		}
	}

	if (count == 0) cout << "\nKhong co phan tu nao la so nguyen to.";
	else {
		cout << "\nCac phan tu la so nguyen to: ";
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

int MaTran::squareCount() {
	int count = 0;
	for (int i = 0; i < sd; i++) {
		for (int j = 0; j < sc; j++) {
			for (int j = 1; j < p[i][j]; j++) {
				if (pow(j, 2) == p[i][j]) count++;
				break;
			}
		}
	}
	return count;
}

bool MaTran::isPerfect(int n) {
	int sum = 0;
	for (int i = 1; i <= n / 2; i++) {
		if (n % i == 0) sum += i;
	}
	if (sum == n) return true;
	return false;
}

void MaTran::perfectSum(int r) {
	if (r > sd) {
		cout << "\nDong nam ngoai gioi han cua ma tran.";
		return;
	}

	r--;
	int sum = 0;
	for (int i = 0; i < sc; i++) {
		if (isPerfect(p[r][i])) {
			sum += p[r][i];
		}
	}
	cout << "\nTong gia tri cac phan tu la so hoan hao tren dong " << r + 1 << ": " << sum;
}

bool MaTran::isSymmetric(int s1) {
	int s2 = 0, t = s1;
	while (t > 0)
	{
		s2 = s2 * 10 + t % 10;
		t /= 10;
	}
	return s2 == s1;
}

void MaTran::averageSymmetric(int c) {
	if (c > sc) {
		cout << "\nDong nam ngoai gioi han cua ma tran.";
		return;
	}

	c--;
	double avg = 0;
	for (int i = 0; i < sd; i++) {
		if (isSymmetric(p[i][c])) avg += p[i][c];
	}
	cout << "\nTrung binh cong cac phan tu la so doi xung tren cot " << c + 1 << ": " << avg / sd;
}

void MaTran::increasing(int r) {
	if (r > sd) {
		cout << "\nDong nam ngoai gioi han cua ma tran.";
		return;
	}

	r--;
	for (int i = 0; i < sc - 1; i++) {
		for (int j = i + 1; j < sc; j++) {
			if (p[r][i] > p[r][j]) swap(p[r][j], p[r][i]);
		}
	}
	cout << "\nCac phan tu tren dong " << r + 1 << " theo thu tu tang dan:\n";
	for (int i = 0; i < sc; i++) {
		cout << p[r][i] << " ";
	}
}