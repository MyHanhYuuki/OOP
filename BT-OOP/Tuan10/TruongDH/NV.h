#pragma once
#include "DTXS.h"
class NV : public DTXS
{
private:
	int sosk;
public:
	NV(string = "", string = "", string = "", int = 0);
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
