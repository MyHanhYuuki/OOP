#include <iostream>
#include "CDate.h"
using namespace std;

int main()
{
    CDate D1, D2;
    int n, d, a;

    cout << "- CHUONG TRINH TINH TOAN 2 NGAY -\n";
    
    do {
        cout << "\nNhap so tuong ung voi yeu cau cua ban:";
        cout << "\n1: Nhap ngay";
        cout << "\n2: Xuat ngay";
        cout << "\n3: Cong voi 1 so ngay";
        cout << "\n4: Tru voi 1 so ngay";
        cout << "\n5: Tinh khoang cach giua 2 ngay";
        cout << "\n6: Cong 1 ngay";
        cout << "\n7: Tru 1 ngay";
        cout << "\n0: Thoat chuong trinh";
        cout << "\nLua chon cua ban: "; cin >> n;

        switch (n) {
        case 1:
            do {
                cout << "\n1: Ngay 1";
                cout << "\n2: Ngay 2";
                cout << "\n0: Tro lai";
                cout << "\nLua chon cua ban: "; cin >> d;
                switch (d) {
                case 1:
                    cin >> D1;
                    break;
                case 2:
                    cin >> D2;
                    break;
                case 0:
                    break;
                default:
                    cout << "\nLua chon khong hop le. Moi ban chon lai\n";
                    break;
                }
            } while (d != 0);
            break;
        case 2:
            cout << "\nNgay 1: " << D1 << "\nNgay 2: " << D2 << "\n";
            break;
        case 3:
            do {
                cout << "\n1: Ngay 1";
                cout << "\n2: Ngay 2";
                cout << "\n0: Tro lai";
                cout << "\nLua chon cua ban: "; cin >> d;
                switch (d) {
                case 1:
                    cout << "\nNhap so ngay can tang: "; cin >> a;
                    cout << "\nNgay 1 moi: " << D1 + a << "\n";
                    break;
                case 2:
                    cout << "\nNhap so ngay can tang: "; cin >> a;
                    cout << "\nNgay 2 moi: " << D2 + a << "\n";
                    break;
                case 0:
                    break;
                default:
                    cout << "\nLua chon khong hop le. Moi ban chon lai\n";
                    break;
                }
            } while (d != 0);
            break;
        case 4:
            do {
                cout << "\n1: Ngay 1";
                cout << "\n2: Ngay 2";
                cout << "\n0: Tro lai";
                cout << "\nLua chon cua ban: "; cin >> d;
                switch (d) {
                case 1:
                    cout << "\nNhap so ngay can giam: "; cin >> a;
                    cout << "\nNgay 1 moi: " << D2 - a << "\n";
                    break;
                case 2:
                    cout << "\nNhap so ngay can giam: "; cin >> a;
                    cout << "\nNgay 1 moi: " << D2 - a << "\n";
                    break;
                case 0:
                    break;
                default:
                    cout << "\nLua chon khong hop le. Moi ban chon lai\n";
                    break;
                }
            } while (d != 0);
            break;
        case 5:
            cout << "\nKhoang cach giua 2 ngay: " << D1 - D2 << " ngay" << "\n";
            break;
        case 6:
            do {
                cout << "\n1: Ngay 1";
                cout << "\n2: Ngay 2";
                cout << "\n0: Tro lai";
                cout << "\nLua chon cua ban: "; cin >> d;
                switch (d) {
                case 1:
                    cout << "\n" << ++D1 << "\n";
                    break;
                case 2:
                    cout << "\n" << ++D2 << "\n";
                    break;
                case 0:
                    break;
                default:
                    cout << "\nLua chon khong hop le. Moi ban chon lai\n";
                    break;
                }
            } while (d != 0);
            break;
        case 7:
            do {
                cout << "\n1: Ngay 1";
                cout << "\n2: Ngay 2";
                cout << "\n0: Tro lai";
                cout << "\nLua chon cua ban: "; cin >> d;
                switch (d) {
                case 1:
                    cout << "\n" << --D1 << "\n";
                    break;
                case 2:
                    cout << "\n" << --D2 << "\n";
                    break;
                case 0:
                    break;
                default:
                    cout << "\nLua chon khong hop le. Moi ban chon lai\n";
                    break;
                }
            } while (d != 0);
            break;
        }
    } while (n != 0);

    return 0;
}