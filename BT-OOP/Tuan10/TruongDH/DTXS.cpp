#include "DTXS.h"

DTXS::DTXS(string maso, string hoten, string khoa, int loai) : maso(maso), hoten(hoten), khoa(khoa), loai(loai) {}

string DTXS::GetMaSo()
{
	return maso;
}

string DTXS::GetHoTen()
{
	return hoten;
}

string DTXS::GetKhoa()
{
	return khoa;
}

int DTXS::GetLoai()
{
	return loai;
}

void DTXS::SetHoten(string hoten)
{
	this->hoten = hoten;
}
	
void DTXS::SetKhoa(string khoa)
{
	this->khoa = khoa;
}

void DTXS::Nhap()
{
	cin.ignore();
	cout << "Nhap ma so: ";
	getline(cin, maso);
	cout << "Nhap ho ten: ";
	getline(cin, hoten);
	cout << "Nhap khoa: ";
	getline(cin, khoa);
}

void DTXS::Xuat()
{
	cout << "-------------------------------" << endl;
	cout << "MS: " << maso << "\tTen: " << hoten << "\tKhoa: " << khoa << "\tLoai: " << (loai == 1 ? "GV" : loai == 2 ? "SV" : loai == 3 ? "NV" : "???");
}