#pragma once
#include "DTXS.h"
class GV : public DTXS
{
private:
	int sobb;
public:
	GV(string = "", string = "", string = "", int = 0);
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

