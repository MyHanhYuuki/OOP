#include <iostream>
#include "Date.h"
using namespace std;


int main()
{
    Date a, b;
    int select = 1, d;
    cout << "\n1. Nhap ngay.";
    cout << "\n2. Xuat ngay.";
    cout << "\n3. Cong them 1 so ngay.";
    cout << "\n4. Tru di 1 so ngay.";
    cout << "\n5. Cong 1 ngay.";
    cout << "\n6. Tru 1 ngay.";
    cout << "\n7. Tinh khoang cach giua 2 ngay.";
    cout << "\n0. Thoat CT";
    while (select != 0)
    {
        cout << "\n---------------------------";
        cout << "\nNhap lua chon: ";
        cin >> select;
        switch (select)
        {
        case 1:
            a.Input();
            break;
        case 2:
            a.Output();
            break;
        case 3:
            cout << "Nhap so ngay muon cong: ";
            cin >> d;
            cout << "Ngay sau khi cong la: ";
            a.Cong(d).Output();
            break;
        case 4:
            cout << "Nhap so ngay muon tru: ";
            cin >> d;
            cout << "Ngay sau khi tru la: ";
            a.Tru(d).Output();
            break;
        case 5:
            cout << "Ngay sau khi cong them 1 ngay la: ";
            a.Cong1Ngay();
            a.Output();
            break;
        case 6:
            cout << "Ngay sau khi tru di 1 ngay la: ";
            a.Tru1Ngay();
            a.Output();
            break;
        case 7:
            cout << "Nhap ngay muon tinh khoang cach: " << endl;
            b.Input();
            cout << "Khoang cach giua 2 ngay la: " << a.KhoangCachGiuaHaiNgay(b) << " ngay";
            break;
        }
    }
    return 0;
}
