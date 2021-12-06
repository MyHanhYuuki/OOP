#include "DIEM.h"
#include "MAU.h"
#include "DIEMMAU.h"
#include <list>

int main()
{
	int n, k = 0, c = 0, count = 0;
	DIEMMAU P;
	bool flag = false;
	cout << "Nhap so luong diem: "; cin >> n;
	list<DIEMMAU> CP;

	for (int i = 0; i < n; i++) {
		cout << "\nNhap thong tin diem thu " << i + 1 << ":\n";
		cin >> P;
		CP.push_back(P);
	}

	cout << "\nNhung diem duoc nhap:\n";
	for (list<DIEMMAU>::iterator it = CP.begin(); it != CP.end(); it++) {
		cout << "\nDiem thu " << k++ << ":" << "\n" << * it << "\n";
	}
	
	cout << "\nKIEM TRA DIEM TRUNG:\n";
	cout << "\nChon diem:\n";
	for (int i = 0; i < n; i++) {
		cout << i + 1 << " ";
	}
	cout << "\n";
	do {
		cin >> k;
		if (k > n) cout << "\nDiem nam ngoai so luong da duoc nhap. Moi nhap lai: ";
	} while (k > n);

	cout << "\nCac diem trung voi diem vua nhap: ";
	list<DIEMMAU>::iterator it1 = CP.begin();
	advance(it1, k - 1);
	for (list<DIEMMAU>::iterator it2 = CP.begin(); it2 != CP.end(); it2++) {
		c++;
		if (*it1 == *it2 && it1 != it2) cout << c << " ";
		count++;
	}
	if (count == 0) cout << "khong co";

	return 0;
}