#include <iostream>
#include "Polynomial.h"
using namespace std;

int main()
{
    Polynomial P1, P2, P3;
    int n, d;

    cout << "- CHUONG TRINH TINH TOAN 2 DA THUC BAT KI -\n";

    do {
        cout << "\nNhap so tuong ung voi yeu cau cua ban:";
        cout << "\n1: Nhap da thuc";
        cout << "\n2: Xuat da thuc";
        cout << "\n3: P1 + P2";
        cout << "\n4: P1 - P2";
        cout << "\n5: P1 * P2";
        cout << "\n6: P1 / P2";
        cout << "\n7: P1 % P2";
        cout << "\n0: Thoat chuong trinh";
        cout << "\nLua chon cua ban: ";
        cin >> n;
        cout << "\n";
        switch (n) {
        case 1:
            do {
                cout << "\n1: Nhap da thuc P1";
                cout << "\n2: Nhap da thuc P2";
                cout << "\n0: Tro lai";
                cout << "\nLua chon cua ban: ";
                cin >> d;

                switch (d) {
                case 1:
                    P1.input(P1);
                    break;
                case 2:
                    P2.input(P2);
                    break;
                case 0:
                    break;
                default:
                    cout << "\nLua chon khong hop le. Moi ban chon lai.\n";
                    break;
                }
            } while (d != 0);
            break;
        case 2:
            cout << "\nP1:  "; P1.display(P1);
            cout << "\nP2:  "; P2.display(P2);
            cout << "\n";
            break;
        case 3:
            P3 = (P1, P2).add(P1, P2);
            P1.display(P1);
            cout << "\n" << "+" << "\n";
            P2.display(P2);
            cout << "\n" << "=" << "\n";
            P3.display(P3);
            cout << "\n";
            break;
        case 4:
            P3 = (P1, P2).minus(P1, P2);
            P1.display(P1);
            cout << "\n" << "-" << "\n";
            P2.display(P2);
            cout << "\n" << "=" << "\n";
            P3.display(P3);
            cout << "\n";
            break;
        case 5:
            P3 = (P1, P2).multiply(P1, P2);
            P1.display(P1);
            cout << "\n" << "*" << "\n";
            P2.display(P2);
            cout << "\n" << "=" << "\n";
            P3.display(P3);
            cout << "\n";
            break;
        case 6:
            if (P2.validate(P2)) {
                P3 = (P1, P2).divide_q(P1, P2);
                P1.display(P1);
                cout << "\n" << "/" << "\n";
                P2.display(P2);
                cout << "\n" << "=" << "\n";
                P3.display(P3);
                cout << "\n";
            }
            else cout << "Khong the chia cho 0.\n";
            break;
        case 7:
            if (P2.validate(P2)) {
                P3 = (P1, P2).divide_r(P1, P2);
                P1.display(P1);
                cout << "\n" << "%" << "\n";
                P2.display(P2);
                cout << "\n" << "=" << "\n";
                P3.display(P3);
                cout << "\n";
            }
            else cout << "Khong the chia cho 0.\n";
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