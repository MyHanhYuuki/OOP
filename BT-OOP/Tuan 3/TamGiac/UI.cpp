#include <iostream>
#include "Triangle.h"
using namespace std;

int main()
{
	Triangle t;
	int n;
	t.Set();

	cout << "Nhap do dai 3 canh tam giac ABC:";
	t.Get(t);

	do {
		cout << "\nNhap so tuong ung voi yeu cau cua ban:";
		cout << "\n1: Chinh sua tam giac";
		cout << "\n2: Xuat tam giac";
		cout << "\n3: Kiem tra do hop le cua 3 canh tam giac";
		cout << "\n4: Phan loai tam giac";
		cout << "\n5: Tinh chu vi tam giac";
		cout << "\n6: Tinh dien tich tam giac";
		cout << "\n0: Thoat chuong trinh\n";
		cin >> n;

		switch (n) {
		case 1:
			t.Get(t);
			break;
		case 2:
			t.Display(t);
			break;
		case 3:
			if (t.isTriangle(t)) cout << "\nDay la tam giac.";
			else cout << "\nDay khong phai tam giac.";
			break;
		case 4:
			if (t.isTriangle(t) == false) {
				cout << "\nDay khong phai tam giac.";
				break;
			}
			t.Classifier(t);
			break;
		case 5:
			if (t.isTriangle(t) == false) {
				cout << "\nDay khong phai tam giac.";
				break;
			}
			cout << "Chu vi tam giac ABC: ";
			cout << t.Perimeter(t) << endl;
			break;
		case 6:
			if (t.isTriangle(t) == false) {
				cout << "\nDay khong phai tam giac.";
				break;
			}
			cout << "Dien tich tam giac ABC: ";
			cout << t.Square(t) << endl;
			break;
		case 0:
			return 0;
		default:
			cout << "\nLua chon khong hop le. Moi ban chon lai.";
			break;
		}
	} while (n != 0);

	return 0;
}