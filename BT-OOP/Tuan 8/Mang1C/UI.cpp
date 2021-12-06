#include <iostream>
#include <math.h>
#include "Mang1C.h"
using namespace std;

int main()
{
	Mang1C A;
	int p, t, n;
	A.input();
	cout << "\nCac phan tu trong mang:\n";
	A.display();

	cout << "\nSo luong so nguyen to: " << A.primeCount();
	cout << "\nSo luong so chinh phuong: " << A.squareNumberCount();
	cout << "\nTong cac so hoan hao: " << A.perfectNumberSum();
	cout << "\nTrung binh cong cac phan tu la so doi xung: " << A.symmetricNumberAverage();
	if (A.isAllOdd()) cout << "\nMang toan phan tu le.";
	else cout << "\nMang khong toan phan tu le.";
	cout << "\nGia tri phan tu chan be nhat: "; A.lowestEven();
	cout << "\nMang tang dan: ";
	Mang1C B(A);
	B.increasing();
	B.display();
	cout << "\nMang giam dan: ";
	Mang1C C(A);
	C.decreasing();
	C.display();
	cout << "\n";

	do {
		cout << "\nNhap so tuong ung voi yeu cau cua ban:";
		cout << "\n1: Xoa 1 phan tu";
		cout << "\n2: Them 1 phan tu";
		cout << "\n3: Tim 1 phan tu";
		cout << "\n0: Thoat chuong trinh";
		cout << "\nLua chon cua ban: ";
		cin >> n;

		switch (n) {
		case 1:
			cout << "\nChon vi tri xoa phan tu: "; cin >> p;
			A.removeAt(p);
			A.display();
			cout << "\n";
			break;
		case 2:
			cout << "\nChon vi tri them phan tu: "; cin >> t;
			cout << "Gia tri can duoc them: "; cin >> p;
			A.addAt(A, p, t);
			cout << "\n";
			break;
		case 3:
			cout << "\nNhap gia tri phan tu can tim: "; cin >> t;
			A.find(t);
			cout << "\n";
			break;
		case 0:
			return 0;
		default:
			cout << "\nLua chon khong hop le.\n";
			break;
		}
	} while (n != 0);

	return 0;
}