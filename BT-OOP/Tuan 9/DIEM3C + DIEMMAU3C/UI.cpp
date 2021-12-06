#include "DIEM.h"
#include "DIEM3C.h"
#include "DIEMMAU3C.h"

int main()
{
	DIEMMAU3C A, B, C;
	int n;
	double c1, c2, c3;
	char p;

	cout << "Nhap toa do tam giac ABC:";
	cout << "\nNhap toa do dinh A:"; cin >> A;
	cout << "\nNhap toa do dinh B:"; cin >> B;
	cout << "\nNhap toa do dinh C:"; cin >> C;

	do {
		if (A.isDuplicate(B)) cout << "\nA va B trung nhau.";
		if (A.isDuplicate(C)) cout << "\nA va C trung nhau.";
		if (B.isDuplicate(C)) cout << "\nB va C trung nhau.";
		cout << "\nNhap so tuong ung voi yeu cau cua ban:";
		cout << "\n1: Chinh sua toa do dinh";
		cout << "\n2: Xuat thong tin dinh"; // Chưa có phần này ở dưới
		cout << "\n2: Di chuyen tam giac"; // Bị trùng số thứ tự với lựa chọn trên
		cout << "\n3: Tim diem doi xung";
		cout << "\n4: Chu vi tam giac";
		cout << "\n5: Dien tich tam giac";
		cout << "\n0: Thoat chuong trinh.";
		cout << "\nLua chon cua ban: "; cin >> n;

		switch (n) {
		case 1:
			cout << "\nChon dinh: A B C\n";
			cin >> p;
			switch (p) {
			case 'A':
			case 'a':
				cin >> A;
				break;
			case 'B':
			case 'b':
				cin >> B;
				break;
			case 'C':
			case 'c':
				cin >> C;
				break;
			default:
				cout << "\nLua chon khong hop le.\n";
				break;
			}
			break;

		case 2:
			cout << "\nChon dinh: A B C\n";
			cin >> p;
			cout << "\nNhap toa do can duoc di chuyen: "; cin >> c1 >> c2 >> c3;
			switch (p) {
			case 'A':
			case 'a':
				A.relocate(c1, c2, c3);
				break;
			case 'B':
			case 'b':
				B.relocate(c1, c2, c3);
				break;
			case 'C':
			case 'c':
				C.relocate(c1, c2, c3);
				break;
			default:
				cout << "\nLua chon khong hop le.";
				break;
			}
			break;

		case 3:
			cout << "\nChon dinh: A B C\n";
			cin >> p;
			switch (p) {
			case 'A':
			case 'a':
				cout << A.symmetry() << "\n";
				break;
			case 'B':
			case 'b':
				cout << B.symmetry() << "\n";
				break;
			case 'C':
			case 'c':
				cout << C.symmetry() << "\n";
				break;
			default:
				cout << "\nLua chon khong hop le.";
				break;
			}
			break;

		case 4:
			if ((A, B, C).isTriangle(A, B, C)) cout << "\n" << "P = " << (A, B, C).perimeter(A, B, C) << "\n";
			else cout << "\nBa diem khong the tao thanh tam giac.\n";
			break;

		case 5:
			if ((A, B, C).isTriangle(A, B, C)) cout << "\n" << "S = " << (A, B, C).area(A, B, C) << "\n";
			else cout << "\nBa diem khong the tao thanh tam giac.\n";
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
