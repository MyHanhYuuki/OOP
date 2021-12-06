#pragma once
#include <fstream>
#include "DTXS.h"
#include "GV.h"
#include "NV.h"
#include "SV.h"
class TRUONGDH
{
private:
	DTXS** pdtxs;
	int sl;
public:
	TRUONGDH();
	int GetSL();
	void Nhap();
	void Xuat();
	void LietKeGVCoTu5BaiBao();
	int DemSVCoDRLToiDa();
	long TinhTongTienThuongNVCo3SKKNTroLen();
	double TinhDTBCuaSVCoDRLDuoi50();
	int KiemTraGVChuaCoBaiBao();
	void TimNVCoSKKNNhieuNhat();
	string DoiChuoiInHoa(string);
	string DoiChuoiInThuong(string);
	void SapXepMaSoTangDan();
	void SapXepMaSoGiamDan();
	void TimDTXSTheoTungKhoa(string);
	void TimDTXSTheoTungMaSo(string);
	void TimDTXSTheoTungHoTen(string);
	void TimDTXSTheoTungTienThuong(long);
	void ThemDTXS();
	void XoaDTXS(string);
	void CapNhatThongTinTheoMaSo(string);
	void DocThongTinTuFile();
	void XuatThongTinRaFile();
	~TRUONGDH();
};

