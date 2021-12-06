#include "NVHD.h"

NVHD::NVHD(string maso, string hoten, string phongban, int soTC, int soNC, double hsVG) : NV(maso, hoten, phongban, 2), soTC(soTC), soNC(soNC), hsVG(hsVG) {}

void NVHD::Nhap()
{
	loai = 2;
	NV::Nhap();
	do
	{
		cout << "Nhap so tien cong: ";
		cin >> soTC;
	} while (soTC < 0);
	do
	{
		cout << "Nhap so ngay cong: ";
		cin >> soNC;
	} while (soNC < 0);
	do
	{
		cout << "Nhap so he so vuot gio: ";
		cin >> hsVG;
	} while (hsVG < 0);
}

void NVHD::Xuat()
{
	NV::Xuat();
	cout << "\nTien cong: " << soTC << "\tNgay cong: " << soNC << "\tHe so VG: " << hsVG << "\tTien luong: " << TinhTienLuong();
}

int NVHD::TinhTienLuong()
{
	return soTC * soNC * (1 + hsVG);
}

int NVHD::GetSoNgayCong()
{
	return soNC;
}
void NVHD::SetSoNgayCong(int soNC)
{
	this->soNC = soNC;
}

double NVHD::GetHeSoVuotGio()
{
	return hsVG;
}
void NVHD::SetHeSoVuotGio(double hsVG)
{
	this->hsVG = hsVG;
}

int NVHD::GetTienCong()
{
	return soTC;
}
void NVHD::SetTienCong(int soTC)
{
	this->soTC = soTC;
}

double NVHD::GetHeSoLuong() { return -1; }
void NVHD::SetHeSoLuong(double hsL) {}
double NVHD::GetHeSoPCCV() { return -1; }
void NVHD::SetHeSoPCCV(double hsPCCV) {}
