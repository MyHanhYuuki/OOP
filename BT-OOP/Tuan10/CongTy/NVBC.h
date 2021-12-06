#pragma once
#include "NV.h"

class NVBC : public NV
{
private:
	double hsL, hsPCCV;
public:
	NVBC(string = "", string = "", string = "", double = 0, double = 0);
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

