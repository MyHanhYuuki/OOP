#include "NVBC.h"

NVBC::NVBC(string maso, string hoten, string phongban, double hsL, double hsPCCV) : NV(maso, hoten, phongban, 1), hsL(hsL), hsPCCV(hsPCCV) {}

void NVBC::Nhap()
{
	loai = 1;
	NV::Nhap();
	do 
	{
		cout << "Nhap he so luong: ";
		cin >> hsL;
	} while (hsL < 0);
	do 
	{
		cout << "Nhap he so phu cap chuc vu: ";
		cin >> hsPCCV;
	} while (hsPCCV < 0);
}

void NVBC::Xuat()
{
	NV::Xuat();
	cout << "\nHe so luong: " << hsL << "\tHe so PCCV: " << hsPCCV << "\tTien luong: " << TinhTienLuong();
}

double NVBC::GetHeSoLuong()
{
	return hsL;
}
double NVBC::GetHeSoPCCV()
{
	return hsPCCV;
}

void NVBC::SetHeSoLuong(double hsL)
{
	this->hsL = hsL;
}
void NVBC::SetHeSoPCCV(double hsPCCV)
{
	this->hsPCCV = hsPCCV;
}

int NVBC::TinhTienLuong()
{
	return (1 + hsL + hsPCCV) * 1000;
}

int NVBC::GetTienCong() { return -1; }
int NVBC::GetSoNgayCong() { return -1; }
double NVBC::GetHeSoVuotGio() { return -1; }
void NVBC::SetTienCong(int soTC) {}
void NVBC::SetSoNgayCong(int soNC) {}
void NVBC::SetHeSoVuotGio(double hsVG) {}