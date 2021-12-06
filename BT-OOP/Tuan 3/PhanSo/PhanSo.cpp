#include "XuLiPhanSo.h"

PHANSO::PHANSO()
{
    this->ts = this->ms = 1;
}

PHANSO::PHANSO(double ts)
{
    this->ts = ts;
    this->ms = 1;
}

PHANSO::PHANSO(double ts, double ms)
{
    this->ts = ts;
    this->ms = ms;
}
void PHANSO::Get()
{
    cout << "Nhap tu so: "; cin >> this->ts;
    do {
        cout << "Nhap mau so khac 0: "; cin >> this->ms;
        if (this->ms == 0) {
            cout << "Mau so khong hop le." << endl << "Nhap mau so khac 0: ";
            cin >> this->ms;
        }
    } while (this->ms == 0);
}
void PHANSO::XuatPS()
{
    if (this->ts % this->ms == 0) {
        cout << this->ts / this->ms;
        return;
    }
    if (this->ms > 0) {
        cout << this->ts << " / " << this->ms;
        return;
    }
    if (this->ms < 0) {
        cout << -this->ts << " / " << this->ms;
        return;
    }
    if (this->ms == -1) {
        cout << -this->ts;
        return;
    }
}

void PHANSO::RutGonPS(PHANSO& ps)
{
    double a = ps.ts, b = ps.ms, ucln;
    a = abs(a); b = abs(b);
    if (a == 0 || b == 0) {
        ucln = a + b;
    }
    else {
        while (a != b) {
            if (a > b) {
                a -= b;
            }
            else {
                b -= a;
            }
        }
    }
    ucln = a;
    ps.ts /= ucln;
    ps.ms /= ucln;
}

void PHANSO::Max(PHANSO ps1, PHANSO ps2)
{
    double phanso1, phanso2, hieu;
    phanso1 = ps1.ts / ps1.ms;
    phanso2 = ps2.ms / ps2.ts;
    hieu = phanso1 - phanso2;

    if (hieu > 0) cout << "\nPhan so thu nhat lon hon.";
    if (hieu < 0) cout << "\nPhan so thu hai lon hon.";
    if (hieu == 0) cout << "\n2 phan so bang nhau.";
}

void PHANSO::Tong(PHANSO ps1, PHANSO ps2)
{
    PHANSO tong;
    tong.ts = (ps1.ts * ps2.ms) + (ps2.ts * ps1.ms);
    tong.ms = ps1.ms * ps2.ms;
    tong.RutGonPS(tong);
    cout << "\nTong 2 phan so: ";
    tong.XuatPS();
}

void PHANSO::Hieu(PHANSO ps1, PHANSO ps2)
{
    PHANSO hieu;
    hieu.ts = (ps1.ts * ps2.ms) - (ps2.ts * ps1.ms);
    hieu.ms = ps1.ms * ps2.ms;
    RutGonPS(hieu);
    cout << "\nHieu 2 phan so: ";
    hieu.XuatPS();
}

void PHANSO::Tich(PHANSO ps1, PHANSO ps2)
{
    PHANSO tich;
    tich.ts = ps1.ts * ps2.ts;
    tich.ms = ps1.ts * ps2.ms;
    RutGonPS(tich);
    cout << "\nTich 2 phan so: ";
    tich.XuatPS();
}

void PHANSO::Thuong(PHANSO ps1, PHANSO ps2)
{
    PHANSO thuong;
    thuong.ts = ps1.ts * ps2.ms;
    thuong.ms = ps1.ms * ps2.ts;
    RutGonPS(thuong);
    cout << "\nThuong 2 phan so: ";
    thuong.XuatPS();
}

double PHANSO::GiaTriThuc(PHANSO ps)
{
    return ps.ts * 1.0 / ps.ms;
}