#pragma once
#include "NV.h"

class NVHD : public NV
{
private:
	int soTC,soNC;
	double hsVG;
public:
	NVHD(string = "", string = "", string = "", int = 0, int = 0, double = 0);
	void Nhap();
	void Xuat();
	int TinhTienLuong();
	int GetSoNgayCong();
	void SetSoNgayCong(int);
	double GetHeSoVuotGio();
	void SetHeSoVuotGio(double);
	int GetTienCong();
	void SetTienCong(int);
	double GetHeSoLuong();
	void SetHeSoLuong(double);
	double GetHeSoPCCV();
	void SetHeSoPCCV(double);
};

