#include "XuLiPhanSo.h"
#include <iostream>

int main()
{
    PHANSO ps1;
    PHANSO ps2;
    int n;

    do {
        cout << "\n--------------------------------------------\n";
        cout << "\nNhap so tuong ung voi yeu cau cua ban:";
        cout << "\n1: Xuat phan so.";
        cout << "\n2: Nhap 2 phan so.";
        cout << "\n3: Tim phan so lon nhat trong 2 phan so";
        cout << "\n4: Tinh tong 2 phan so.";
        cout << "\n5: Tinh hieu 2 phan so.";
        cout << "\n6: Tinh tich 2 phan so.";
        cout << "\n7; Tinh thuong 2 phan so.";
        cout << "\n8: Tinh gia tri thuc cua phan so";
        cout << "\n0: Thoat CT.\n";
        cin >> n;

        switch (n)
        {
        case 1:
            ps1.XuatPS();
            cout << "\n";
            ps2.XuatPS();
            cout << "\n";
            continue;
        case 2:
            cout << "\nNhap phan so thu nhat." << endl;
            ps1.Get();
            cout << "\nNhap phan so thu hai." << endl;
            ps2.Get();
            cout << "\n";
            continue;
        case 3:
            (ps1, ps2).Max(ps1, ps2);
            cout << "\n";
            continue;
        case 4:
            (ps1, ps2).Tong(ps1, ps2);
            cout << "\n";
            continue;
        case 5:
            (ps1, ps2).Hieu(ps1, ps2);
            cout << "\n";
            continue;
        case 6:
            (ps1, ps2).Tich(ps1, ps2);
            cout << "\n";
            continue;
        case 7:
            (ps1, ps2).Thuong(ps1, ps2);
            cout << "\n";
            continue;
        case 8:
            cout << "\nGia tri thuc cua phan so thu nhat: ";
            cout << ps1.GiaTriThuc(ps1);
            cout << "\nGia tri thuc cua phan so thu hai: ";
            cout << ps2.GiaTriThuc(ps2);
            cout << "\n";
            continue;
        case 0:
            return 0;
        default:
            cout << "Lua chon khong hop le. Moi ban chon lai.\n";
            continue;
        }
    } while (n != 0);

    return 0;
}