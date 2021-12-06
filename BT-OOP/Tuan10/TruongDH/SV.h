#pragma once
#include "DTXS.h"
class SV : public DTXS
{
private:
	double dtb, drl;
public:
	SV(string = "", string = "", string = "", double = 0, double = 0);
	void Nhap();
	void Xuat();
	long TinhTienThuong();
	int GetSoSK();
	int GetSoBB();
	double GetDTB();
	double GetDRL();
	void SetSoSK(int);
	void SetDTB(double);
	void SetDRL(double);
	void SetSoBB(int);
};
