#include <iostream>
#include "Complex.h"
using namespace std;

int main() {
	int n, c;
	Complex C1, C2;

    cout << "- CHUONG TRINH TINH TOAN 2 SO PHUC -" << endl;

    do {
        cout << "\nNhap so tuong ung voi yeu cau cua ban:\n";
        cout << "\n1: Nhap so phuc (mac dinh la 0 neu ban chua nhap gi)";
        cout << "\n2: Xuat so phuc";
        cout << "\n3: Cong 2 so phuc";
        cout << "\n4: Tru 2 so phuc";
        cout << "\n5: Nhan 2 so phuc";
        cout << "\n6: Chia 2 so phuc";
        cout << "\n0: Thoat chuong trinh";
        cout << "\nLua chon cua ban: ";
        cin >> n;

        switch (n) {
        case 1:
            do {
                cout << "\n1: So phuc C1";
                cout << "\n2: So phuc C2";
                cout << "\n0: Tro lai";
                cout << "\nLua chon cua ban: "; cin >> c;
                switch (c) {
                case 1:
                    cout << "\nC1:";
                    cin >> C1;
                    break;
                case 2:
                    cout << "\nC2";
                    cin >> C2;
                    break;
                case 0:
                    break;
                default:
                    cout << "\nLua chon khong hop le. Moi ban chon lai.\n";
                    break;
                }
            } while (c != 0);
        case 2:
            cout << "\nC1: " << C1;
            cout << "\nC2: " << C2;
            break;
        case 3:
            cout << "\n" << "(" << C1 << ")" << " + " << "(" << C2 << ")" << " = " << C1 + C2 << "\n";
            break;
        case 4:
            cout << "\n" << "(" << C1 << ")" << " - " << "(" << C2 << ")" << " = " << C1 - C2 << "\n";
            break;
        case 5:
            cout << "\n" << "(" << C1 << ")" << " * " << "(" << C2 << ")" << " = " << C1 * C2 << "\n";
            break;
        case 6:
            cout << "\n" << "(" << C1 << ")" << " / " << "(" << C2 << ")" << " = " << C1 / C2 << "\n";
            break;
        case 0:
            return 0;
        default:
            cout << "\nLua chon khong hop le. Moi ban chon lai.\n";
            break;
        }
    } while (n != 0);
}