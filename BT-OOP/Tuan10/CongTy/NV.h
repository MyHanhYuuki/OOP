#pragma once
#include <iostream>
#include <string>
using namespace std;

class NV
{
protected:
	string hoten, maso, phongban;
	int loai;
public:
	NV(string = "", string = "", string = "", int = 0);
	string GetHoTen();
	string GetMaSo();
	string GetPhongBan();
	int GetLoai();
	void SetHoTen(string);
	void SetMaSo(string);
	void SetPhongBan(string);
	virtual void Nhap();
	virtual void Xuat();
	virtual int TinhTienLuong() = 0;
	virtual int GetSoNgayCong() = 0;
	virtual void SetSoNgayCong(int) = 0;
	virtual double GetHeSoVuotGio() = 0;
	virtual void SetHeSoVuotGio(double) = 0;
	virtual int GetTienCong() = 0;
	virtual void SetTienCong(int) = 0;
	virtual double GetHeSoLuong() = 0;
	virtual void SetHeSoLuong(double) = 0;
	virtual double GetHeSoPCCV() = 0;
	virtual void SetHeSoPCCV(double) = 0;
};

