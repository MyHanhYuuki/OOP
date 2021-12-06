#include "SV.h"

SV::SV(string maso, string hoten, string khoa, double drl, double dtb) : DTXS(maso, hoten, khoa, 2), drl(drl), dtb(dtb) {}

double SV::GetDRL()
{
	return drl;
}

double SV::GetDTB()
{
	return dtb;
}

void SV::SetDRL(double drl)
{
	while (drl < 0 || drl > 100)
	{
		cout << "Nhap diem ren luyen: ";
		cin >> drl;
	}
	this->drl = drl;
}

void SV::SetDTB(double dtb)
{
	while (dtb < 0 || dtb > 10)
	{
		cout << "Nhap diem trung binh: ";
		cin >> dtb;
	}
	this->dtb = dtb;
}

void SV::Nhap()
{
	loai = 2;
	DTXS::Nhap();
	do
	{
		cout << "Nhap diem ren luyen: ";
		cin >> drl;
	} while (drl < 0 || drl > 100);
	do
	{
		cout << "Nhap diem trung binh: ";
		cin >> dtb;
	} while (dtb < 0 || dtb > 10);
}

void SV::Xuat()
{
	DTXS::Xuat();
	cout << "\nDRL: " << drl << "\tDTB: " << dtb << "\tTien Thuong: " << TinhTienThuong() << endl;
}

long SV::TinhTienThuong()
{
	long thuong = 0;
	if (drl >= 85) thuong = dtb > 9 ? 7000000 : dtb >= 8.5 ? 5000000 : 0;
	return thuong;
}

int SV::GetSoBB() { return -1; }
int SV::GetSoSK() { return -1; }

void SV::SetSoSK(int sosk) {}
void SV::SetSoBB(int sobb) {}