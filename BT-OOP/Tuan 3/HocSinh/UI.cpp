#include <iostream>
#include "Student.h"
using namespace std;

int main()
{
	Student s;
	int n;

	cout << "CHUONG TRINH DANH GIA HOC SINH";

	do {
		cout << "\nNhap so tuong ung voi yeu cau cua ban:";
		cout << "\n1: Nhap thong tin hoc sinh";
		cout << "\n2: Xuat thong tin hoc sinh";
		cout << "\n3: Tinh diem trung binh";
		cout << "\n4: Xep loai hoc sinh";
		cout << "\n0: Thoat chuong trinh";
		cout << "\nLua chon cua ban: ";
		cin >> n;

		switch (n) {
		case 1:
			s.getInfo();
			cout << "\n";
			break;
		case 2:
			s.display();
			cout << "\n";
			break;
		case 3:
			cout << "\nDiem trung binh: " << s.Average();
			cout << "\n";
			break;
		case 4:
			cout << "\nXep loai: " << s.Placement();
			cout << "\n";
			break;
		case 0:
			return 0;
		default:
			cout << "\nLua chon khong hop le. Moi ban chon lai\n";
			break;
		}
	} while (n != 0);

	return 0;
}