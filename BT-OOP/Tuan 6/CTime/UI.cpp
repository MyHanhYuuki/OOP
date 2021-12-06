#include <iostream>
#include "CTime.h"
using namespace std;

int main()
{
	CTime T1, T2;
	int n, t;

	cout << "- CHUONG TRINH TINH TOAN THOI GIAN -\n";

	do {
		cout << "\nNhap so tuong ung voi yeu cau cua ban:";
		cout << "\n1: Nhap thoi gian";
		cout << "\n2: Xuat thoi gian";
		cout << "\n3: Cong 2 thoi gian";
		cout << "\n4: Tru 2 thoi gian";
		cout << "\n5: Cong 1 giay";
		cout << "\n6: Tru 1 giay";
		cout << "\n0: Thoat chuong trinh";
		cout << "\nLua chon cua ban: "; cin >> n;

		switch (n) {
		case 1:
			do {
				cout << "\n1: Nhap thoi gian 1";
				cout << "\n2: Nhap thoi gian 2";
				cout << "\n0: Tro lai";
				cout << "\nLua chon cua ban: "; cin >> t;
				switch (t) {
				case 1:
					cin >> T1;
					break;
				case 2:
					cin >> T2;
					break;
				case 0:
					break;
				default:
					cout << "\nLua chon khong hop le. Moi ban chon lai.\n";
					break;
				}
			} while (t != 0);
			break;
		case 2:
			cout << "\n" << T1 << "\n" << T2 << "\n";
			break;
		case 3:
			cout << "\n" << T1 << " + " << T2 << " = " << T1 + T2 << "\n";
			break;
		case 4:
			cout << "\n" << T1 << " - " << T2 << " = " << T1 - T2 << "\n";
			break;
		case 5:
			do {
				cout << "\n1: Cong 1 giay vao thoi gian 1";
				cout << "\n2: Cong 1 giay vao thoi gian 2";
				cout << "\n0: Tro lai";
				cout << "\nLua chon cua ban: "; cin >> t;

				switch (t) {
				case 1:
					++T1;
					cout << "\n" << T1 << "\n";
					break;
				case 2:
					++T2;
					cout << "\n" << T2 << "\n";
					break;
				case 0:
					break;
				default:
					cout << "\nLua chon khong hop le. Moi ban chon lai.\n";
					break;
				}
			} while (t != 0);
			break;
		case 6:
			do {
				cout << "\n1: Tru 1 giay vao thoi gian 1";
				cout << "\n2: Tru 1 giay vao thoi gian 2";
				cout << "\n0: Tro lai";
				cout << "\nLua chon cua ban: "; cin >> t;

				switch (t) {
				case 1:
					--T1;
					cout << T1;
					break;
				case 2:
					--T2;
					cout << T2;
					break;
				case 0:
					break;
				default:
					cout << "\nLua chon khong hop le. Moi ban chon lai.\n";
					break;
				}
			} while (t != 0);
			break;
		case 0:
			return 0;
		default:
			cout << "\nLua chon khong hop le. Moi ban chon lai.\n";
			break;
		}
	} while (n != 0);
}