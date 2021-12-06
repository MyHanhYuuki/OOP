#include <iostream>
#include "LinearProcessor.h"
#include "QuadraticProcessor.h"
using namespace std;

int main()
{
	LinearProcessor l;
	QuadraticProcessor q;
	int n;

	cout << "CHUONG TRINH GIAI PHUONG TRINH BAC 1 VA BAC 2\n";

	do {
		cout << "\nNhap so tuong ung voi yeu cau cua ban:";
		cout << "\n1: Giai phuong trinh bac 1";
		cout << "\n2: Giai phuong trinh bac 2";
		cout << "\n0: Thoat chuong trinh";
		cout << "\nLua chon cua ban: ";
		cin >> n;

		switch (n) {
		case 1:
			l.GetAmountLE();
			l.ComputeLEs();
			break;
		case 2:
			q.GetAmountQE();
			q.ComputeQEs();
			break;
		case 0:
			return 0;
		default:
			cout << "\nLua chon khong hop le. Moi ban chon lai.\n";
			break;
		}
	} while (n != 0);

	return 0;
}