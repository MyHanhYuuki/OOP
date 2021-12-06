#include "NV.h"

NV::NV(string maso, string hoten, string khoa, int sosk) : DTXS(maso, hoten, khoa, 3), sosk(sosk) {}

int NV::GetSoSK()
{
	return sosk;
}

void NV::SetSoSK(int sosk)
{
	while (sosk < 0)
	{
		cout << "Nhap so sang kien: ";
		cin >> sosk;
	}
	this->sosk = sosk;
}

void NV::Nhap()
{
	loai = 3;
	DTXS::Nhap();
	do
	{
		cout << "Nhap so sang kien: ";
		cin >> sosk;
	} while (sosk < 0);
}

void NV::Xuat()
{
	DTXS::Xuat();
	cout << "\nSo sang kien: " << sosk << "\tTien Thuong: " << TinhTienThuong() << endl;
}

long NV::TinhTienThuong()
{
	long thuong;
	thuong = sosk * 3000000;
	if (sosk >= 3) thuong = thuong * 12 / 10;
	return thuong;
}

int NV::GetSoBB() { return -1; }
double NV::GetDRL() { return -1; }
double NV::GetDTB() { return -1; }

void NV::SetDRL(double drl) {}
void NV::SetDTB(double dtb) {}
void NV::SetSoBB(int sobb) {}