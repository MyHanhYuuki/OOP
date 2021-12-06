#include "GV.h"

GV::GV(string maso, string hoten, string khoa, int sobb) : DTXS(maso, hoten, khoa, 1), sobb(sobb) {}

int GV::GetSoBB()
{
	return sobb;
}

void GV::SetSoBB(int sobb)
{
	while (sobb < 0)
	{
		cout << "Nhap so bai bao: ";
		cin >> sobb;
	}
	this->sobb = sobb;
}

void GV::Nhap()
{
	loai = 1;
	DTXS::Nhap();
	do 
	{
		cout << "Nhap so bai bao: ";
		cin >> sobb;
	} while (sobb < 0);
}

void GV::Xuat()
{
	DTXS::Xuat();
	cout << "\nSo bai bao: " << sobb << "\tTien Thuong: " << TinhTienThuong() << endl;
}

long GV::TinhTienThuong()
{
	long thuong, them;
	thuong = sobb * 20000000;
	them = (sobb >= 6) ? 15000000 : (sobb > 3) ? 10000000 : 0;
	return thuong + them;
}

double GV::GetDRL() { return -1; }
double GV::GetDTB() { return -1; }
int GV::GetSoSK() { return -1; }

void GV::SetDRL(double drl) {}
void GV::SetDTB(double dtb) {}
void GV::SetSoSK(int sosk) {}