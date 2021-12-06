#pragma once
#include "NV.h"
#include "NVBC.h"
#include "NVHD.h"

class CongTy
{
private:
	NV** nv;
	int sl;
public:
	CongTy();
	int GetSoLuong();
	void Nhap();
	void Xuat();
	void LietKeNVBCCoHeSoLuong35TroLen();
	int DemSLNVHDCoSoNgayCongLa26();
	int TinhTienLuongChoKeToan();
	double TinhTienLuongTBChoNVBC();
	int KTCoNVHDKhongDiLamNgayNao();
	void TimNVBCCoHSLuongCaoNhat();
	string DoiChuoiInHoa(string);
	string DoiChuoiInThuong(string);
	void SapXepTangTheoMaSo();
	void ThemNV();
	void XoaNV(string);
	void TimNVTheoMaSo(string);
	void TimNVTheoHoTen(string);
	void TimNVTheoPhongBan(string);
	void TimNVTheoTienLuong(int);
	~CongTy();
};

