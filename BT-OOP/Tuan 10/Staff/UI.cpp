#include <iostream>
#include <string>
#include "Company.h"
using namespace std;

int main()
{
	Company C;
	int n, s;
	string f, f2;

	do {
		cout << "-- CHUONG TRINH QUAN LY NHAN VIEN --";
		cout << "\nNhap lua chon tuong ung voi yeu cau cua ban:";
		cout << "\n1: Nhap thong tin nhan vien";
		cout << "\n2: Xuat thong tin nhan vien";
		cout << "\n3: Liet ke cac nhan vien bien che co he so luong tu 3.5 tro len";
		cout << "\n4: Tinh tong tien luong da tra cho cac nhan vien phong Ke toan";
		cout << "\n5: Tinh tien luong trung binh cua cac nhan vien bien che";
		cout << "\n6: Kiem tra cong ty co nhan vien hop dong khong di lam ngay nao khong";
		cout << "\n7: Tim cac nhan vien bien che co he so luong cao nhat";
		cout << "\n8: Sap xep danh sach nhan vien theo ma so tang dan.";
		cout << "\n9: Them 1 nhan vien moi";
		cout << "\n10: Xoa 1 nhan vien theo ma so";
		cout << "\n11: Tim nhan vien theo yeu cau";
		cout << "\n0: Thoat chuong trinh";
		cout << "\nLua chon cua ban: "; cin >> n;

		switch (n) {
		case 1:
			C.input();
			system("pause");
			system("CLS");
			break;
		case 2:
			C.display();
			system("pause");
			system("CLS");
			break;
		case 3:
			C.wcAbove3AndAHalf();
			system("pause");
			system("CLS");
			break;
		case 4:
			cout << "Tong tien luong da tra cho cac nhan vien phong Ke toan: " << C.accountantWage();
			system("pause");
			system("CLS");
			break;
		case 5:
			cout << "Tien luong trung binh cua cac nhan vien bien che" << C.averageRSWage();
			system("pause");
			system("CLS");
			break;
		case 6:
			if (C.noWorkdayCS()) cout << "\nCo nhan vien hop dong khong di lam ngay nao.\n";
			else cout << "\nKhong co nhan vien hop dong khong di lam ngay nao.\n";
			system("pause");
			system("CLS");
			break;
		case 7:
			C.highestWCRS();
			system("pause");
			system("CLS");
			break;
		case 8:
			C.IDNumSort();
			system("pause");
			system("CLS");
			break;
		case 9:
			C.addBack();
			system("pause");
			system("CLS");
			break;
		case 10:
			cout << "\nNhap ma so: ";
			cin.ignore();
			getline(cin, f);
			C.remove(f);
			system("pause");
			system("CLS");
			break;
		case 11:
			system("CLS");
			do {
				cout << "\nTim theo:\n1: Ma so\n2: Ten\n3: Phong ban\n0: Quay lai\nLua chon cua ban: ";
				cin >> s;
				switch (s) {
				case 1:
					C.findID();
					system("pause");
					system("CLS");
					break;
				case 2:
					C.findName();
					system("pause");
					system("CLS");
					break;
				case 3:
					C.findDepartment();
					system("pause");
					system("CLS");
					break;
				case 0:
					system("CLS");
					break;
				default:
					cout << "\nLua chon khong hop le. Moi ban chon lai.\n";
					break;
				}
			} while (s != 0);
			break;
		case 0:
			break;
		default:
			cout << "\nLua chon khong hop le. Moi ban chon lai.\n";
			system("pause");
			system("CLS");
			break;
		}
	} while (n != 0);

	system("pause");
	system("CLS");
	return 0;
}