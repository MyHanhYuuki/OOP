#pragma once
#include <iostream>
#include <string>
using namespace std;

class DTXS
{
protected:
	string maso, hoten, khoa;
	int loai;
public:
	DTXS(string = "", string = "", string = "", int = 0);
	string GetMaSo();
	string GetHoTen();
	string GetKhoa();
	int GetLoai();
	void SetHoten(string);
	void SetKhoa(string);
	virtual void Nhap() = 0;
	virtual void Xuat() = 0;
	virtual long TinhTienThuong() = 0;
	virtual int GetSoBB() = 0;
	virtual double GetDTB() = 0;;
	virtual double GetDRL() = 0;
	virtual int GetSoSK() = 0;
	virtual void SetSoBB(int) = 0;
	virtual void SetDTB(double) = 0;
	virtual void SetDRL(double) = 0;
	virtual void SetSoSK(int) = 0;
};

