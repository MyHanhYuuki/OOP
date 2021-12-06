#include "NV.h"

NV::NV(string maso, string hoten, string phongban, int loai) : maso(maso), hoten(hoten), phongban(phongban), loai(loai) {}

string NV::GetHoTen()
{
	return hoten;
}
string NV::GetMaSo()
{
	return maso;
}
string NV::GetPhongBan()
{
	return phongban;
}
int NV::GetLoai()
{
	return loai;
}

void NV::SetHoTen(string hoten)
{
	this->hoten = hoten;
}
void NV::SetMaSo(string maso)
{
	this->maso = maso;
}
void NV::SetPhongBan(string phongban)
{
	this->phongban = phongban;
}

void NV::Nhap()
{
	cin.ignore();
	cout << "Nhap ma so: ";
	getline(cin, maso);
	cout << "Nhap ho ten: ";
	getline(cin, hoten);
	cout << "Nhap phong ban: ";
	getline(cin, phongban);
}

void NV::Xuat()
{
	cout << "\n-------------------------------" << endl;
	cout << "MS: " << maso << "\tTen: " << hoten << "\tPhong ban: " << phongban << "\tLoai: " << (loai == 1 ? "NV bien che" : "NV hop dong");
}