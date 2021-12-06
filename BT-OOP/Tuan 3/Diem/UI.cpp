#include <iostream>
#include <stdio.h>
#include "Point.h"
using namespace std;

int main()
{
	POINT p, p1, p2, p3;
	int a, n;
	char c;
	string d[2];
	p.Set();
	p1.Set();
	p2.Set();
	p3.Set();

	do {
		cout << "\nNhap so diem can nhap (toi da 3 diem, 0 de thoat chuong trinh): ";
		cin >> a;

		switch (a) {
		case 1:
			cout << "\nNhap toa do diem A:";
			p.Get(p);

			do {
				cout << "\nNhap so tuong ung voi yeu cau cua ban:" << endl;
				cout << "\n1: Xuat diem";
				cout << "\n2: Di chuyen diem";
				cout << "\n3: Lay diem doi xung qua goc toa do";
				cout << "\n0: Tro lai" << endl;
				cin >> n;

				switch (n) {
				case 1:
					cout << "\nA";
					p.Display();
					break;
				case 2:
					p.Move(p);
					break;
				case 3:
					p.Symmetry(p);
					break;
				case 0:
					break;
				default:
					cout << "\nLua chon khong hop le. Moi ban chon lai.";
					break;
				}
			} while (n != 0);
			break;

		case 2:
			cout << "\nNhap toa do diem A:";
			p1.Get(p1);
			cout << "\nNhap toa do diem B:";
			p2.Get(p2);

			do {
				cout << "\nNhap so tuong ung voi yeu cau cua ban:" << endl;
				cout << "\n1: Xuat diem";
				cout << "\n2: Di chuyen diem";
				cout << "\n3: Kiem tra 2 diem co trung nhau hay khong";
				cout << "\n4: Tinh khoang cach giua 2 diem";
				cout << "\n5: Lay diem doi xung qua goc toa do";
				cout << "\n0: Tro lai" << endl;
				cin >> n;

				switch (n) {
				case 1:
					cout << "\nA"; p1.Display();
					cout << "B"; p2.Display();
					break;
				case 2:
					do {
						cout << "\nChon diem can duoc di chuyen: A / B" << endl;
						cin >> c;
						switch (c) {
						case 'a':
						case 'A':
							p1.Move(p1);
							break;
						case 'b':
						case 'B':
							p2.Move(p2);
							break;
						default:
							cout << "\nLua chon khong hop le. Moi ban chon lai." << endl;
							break;
						}
					} while (c != 'a' && c != 'A' && c != 'b' && c != 'B');
					break;
				case 3:
					if ((p1, p2).Duplicate(p1, p2)) {
						cout << "\n2 diem trung nhau.";
					}
					else {
						cout << "\n2 diem khong trung nhau.";
					}
					break;
				case 4:
					cout << "\nKhoang cach giua 2 diem: ";
					cout << (p1, p2).Distance(p1, p2);
					break;
				case 5:
					do {
						cout << "Chon diem can lay doi xung: A / B" << endl;
						cin >> c;
						switch (c) {
						case 'a':
						case 'A':
							p1.Symmetry(p1);
							break;
						case 'b':
						case 'B':
							p2.Symmetry(p2);
							break;
						default:
							cout << "\nLua chon khong hop le. Moi ban chon lai." << endl;
							break;
						}
					} while (c != 'a' && c != 'A' && c != 'b' && c != 'B');
				case 0:
					break;
				default:
					cout << "\nLua chon khong hop le. Moi ban chon lai." << endl;
					break;
				}
			} while (n != 0);
			break;

		case 3:
			cout << "\nNhap toa do diem A:";
			p1.Get(p1);
			cout << "\nNhap toa do diem B:";
			p2.Get(p2);
			cout << "\nNhap toa do diem C:";
			p3.Get(p3);

			do {
				cout << "\nNhap so tuong ung voi yeu cau cua ban:" << endl;
				cout << "\n1: Xuat diem";
				cout << "\n2: Di chuyen diem";
				cout << "\n3: Lay diem doi xung qua goc toa do";
				cout << "\n4: Tinh chu vi tam giac ABC";
				cout << "\n5: Tinh dien tich tam giac ABC";
				cout << "\n0: Tro lai" << endl;
				cin >> n;

				switch (n) {
				case 1:
					cout << "\nA"; p1.Display();
					cout << "B"; p2.Display();
					cout << "C"; p3.Display();
					break;
				case 2:
					do {
						cout << "\nChon diem can duoc di chuyen: A / B / C" << endl;
						cin >> c;
						switch (c) {
						case 'a':
						case 'A':
							p1.Move(p1);
							break;
						case 'b':
						case 'B':
							p2.Move(p2);
							break;
						case 'c':
						case 'C':
							p3.Move(p3);
							break;
						default:
							cout << "\nLua chon khong hop le. Moi ban chon lai.";
							break;
						}
					} while (c != 'a' && c != 'A' && c != 'b' && c != 'B' && c != 'c' && c != 'C');
					break;
				case 3:
					do {
						cout << "Chon diem can lay doi xung: A / B / C" << endl;
						cin >> c;
						switch (c) {
						case 'a':
						case 'A':
							p1.Symmetry(p1);
							break;
						case 'b':
						case 'B':
							p2.Symmetry(p2);
							break;
						case 'c':
						case 'C':
							p3.Symmetry(p3);
							break;
						default:
							cout << "\nLua chon khong hop le. Moi ban chon lai.";
							break;
						}
					} while (c != 'a' && c != 'A' && c != 'b' && c != 'B' && c != 'c' && c != 'C');
					break;
				case 4:
					if ((p1, p2, p3).isTriangle(p1, p2, p3)) {
						cout << "\nChu vi tam giac ABC: ";
						cout << (p1, p2, p3).Perimeter(p1, p2, p3);
					}
					else {
						cout << "\n3 diem vua nhap khong tao thanh 1 tam giac.";
					}
					break;
				case 5:
					if ((p1, p2, p3).isTriangle(p1, p2, p3)) {
						cout << "\nDien tich tam giac ABC: ";
						cout << (p1, p2, p3).Square(p1, p2, p3);
					}
					else {
						cout << "\n3 diem vua nhap khong tao thanh 1 tam giac.";
					}
					break;
				case 0:
					break;
				default:
					cout << "\nLua chon khong hop le. Moi ban chon lai.";
					break;
				}
			} while (n != 0);
			break;

		case 0:
			return 0;

		default:
			cout << "\nKhong nam trong gioi han cho phep. Moi ban chon lai.";
			break;
		}
	} while (a != 0);

	return 0;
}