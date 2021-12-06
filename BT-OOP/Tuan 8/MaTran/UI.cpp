#include <iostream>
#include "MaTran.h"
using namespace std;

int main()
{
	MaTran M;
	int n, k;
	cout << "Nhap ma tran:";
	M.input();
	cout << "\nMa tran vua nhap:\n";
	M.display();
	M.displayPrime();
	cout << "\nSo luong so chinh phuong: " << M.squareCount() << "\n";
	
	do {
		cout << "\nNhap so tuong ung voi yeu cau cua ban:";
		cout << "\n1: Tong gia tri cac phan tu la so hoan hao tren dong k";
		cout << "\n2: Trung binh cong cac phan tu la so doi xung tren cot k";
		cout << "\n3: Sap xep cac phan tu tang dan tren dong k";
		cout << "\n0: Thoat chuong trinh";
		cout << "\nLua chon cua ban: ";
		cin >> n;

		switch (n) {
		case 1:
			cout << "\nChon dong: "; cin >> k;
			M.perfectSum(k);
			cout << "\n";
			break;
		case 2:
			cout << "\nChon dong: "; cin >> k;
			M.averageSymmetric(k);
			cout << "\n";
			break;
		case 3:
			cout << "\nChon dong "; cin >> k;
			M.increasing(k);
			cout << "\n";
			break;
		}
	} while (n != 0);

	return 0;
}