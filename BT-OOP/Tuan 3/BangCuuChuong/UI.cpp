#include <iostream>
#include "MultiplicationTable.h"
using namespace std;

int main()
{
	MultiplicationTable b{};
	int a;

	cout << "\nChuong trinh xuat bang cuu chuong theo n va m." << endl;
	b.Get(b);
	
	do {
		cout << "\nNhap so tuong ung voi yeu cau cua ban:";
		cout << "\n1: Nhap lai n, m";
		cout << "\n2: In bang cuu chuong n";
		cout << "\n3: In bang cuu chuong tu n den m";
		cout << "\n4: In bang cuu chuong tong hop tu 2 den 9";
		cout << "\n0: Thoat chuong trinh" << endl;
		cin >> a;

		switch (a) {
		case 1:
			b.Get(b);
			break;
		case 2:
			b.MT_n(b);
			break;
		case 3:
			b.MT_nm(b);
			break;
		case 4:
			b.MT();
			break;
		case 0:
			return 0;
		default:
			cout << "\nLua chon khong hop le. Moi ban chon lai." << endl;
		}
	} while (a != 0);

	return 0;
}