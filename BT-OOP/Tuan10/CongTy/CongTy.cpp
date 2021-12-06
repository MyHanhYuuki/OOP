#include "CongTy.h"

CongTy::CongTy()
{
	nv = NULL;
	sl = 0;
}

int CongTy::GetSoLuong()
{
	return sl;
}

void CongTy::Nhap()
{
	int l;
	do
	{
		cout << "Nhap so luong nhan vien: ";
		cin >> sl;
	} while (sl < 1);
	nv = new NV * [sl];
	for (int i = 0; i < sl; i++)
	{
		cout << "-------------------------------" << endl;
		cout << "Nhap thong tin NV thu " << i + 1 << " :" << endl;
		do
		{
			cout << "Nhap loai (NVBC: 1, NVHD: 2): ";
			cin >> l;
		} while (l < 1 || l > 2);
		if (l == 1)
			nv[i] = new NVBC;
		else
			nv[i] = new NVHD;
		nv[i]->Nhap();
	}
}

void CongTy::Xuat()
{
	for (int i = 0; i < sl; i++)
	{
		nv[i]->Xuat();
	}
}

void CongTy::LietKeNVBCCoHeSoLuong35TroLen()
{
	for (int i = 0; i < sl; i++)
	{
		if (nv[i]->GetHeSoLuong() >= 3.5)
			nv[i]->Xuat();
	}
}

int CongTy::DemSLNVHDCoSoNgayCongLa26()
{
	int dem = 0;
	for (int i = 0; i < sl; i++)
	{
		if (nv[i]->GetSoNgayCong() == 26)
		{
			dem++;
		}
	}
	return dem;
}
int CongTy::TinhTienLuongChoKeToan()
{
	int luong = 0;
	for (int i = 0; i < sl; i++)
	{
		if (DoiChuoiInHoa(nv[i]->GetPhongBan()) == "KE TOAN")
		{
			luong += nv[i]->TinhTienLuong();
		}
	}
	return luong;
}

double CongTy::TinhTienLuongTBChoNVBC()
{
	int dem = 0;
	double tongLuong = 0;
	for (int i = 0; i < sl; i++)
	{
		if (nv[i]->GetLoai() == 1)
		{
			dem++;
			tongLuong += nv[i]->TinhTienLuong();
		}
	}
	return dem > 0 ? tongLuong / dem : 0;
}

int CongTy::KTCoNVHDKhongDiLamNgayNao()
{
	int kt = 1;
	for (int i = 0; i < sl; i++)
	{
		if (nv[i]->GetLoai() == 2)
		{
			if (nv[i]->GetSoNgayCong() == 0)
			{
				kt = 2;
				break;
			}
		}
		kt = 3;
	}
	return kt;
}

void CongTy::TimNVBCCoHSLuongCaoNhat()
{
	double hslmax = -1;
	int vitri = -1;
	for (int i = 0; i < sl; i++)
	{
		if (nv[i]->GetLoai() == 1)
		{
			hslmax = nv[i]->GetHeSoLuong();
			vitri = i;
			break;
		}
	}
	if (vitri == -1)
	{
		cout << "Khong co NVBC" << endl;
	}
	else
	{
		for (int i = vitri + 1; i < sl; i++)
		{
			if (nv[i]->GetHeSoLuong() > hslmax)
			{
				hslmax = nv[i]->GetHeSoLuong();
				vitri = i;
			}
		}
		for (int i = 0; i < sl; i++)
		{
			if (nv[i]->GetHeSoLuong() == hslmax)
			{
				nv[i]->Xuat();
			}
		}
	}
}

string CongTy::DoiChuoiInHoa(string s)
{
	for (int i = 0; i < s.length(); i++)
	{
		s[i] = toupper(s[i]);
	}
	return s;
}
string CongTy::DoiChuoiInThuong(string s)
{
	for (int i = 0; i < s.length(); i++)
	{
		s[i] = tolower(s[i]);
	}
	return s;
}

void CongTy::SapXepTangTheoMaSo()
{
	for (int i = 0; i < sl - 1; i++)
	{
		for (int j = 0; j < sl; j++)
		{
			if (DoiChuoiInHoa(nv[i]->GetMaSo()) > DoiChuoiInHoa(nv[j]->GetMaSo()))
			{
				NV* temp = nv[i];
				nv[i] = nv[j];
				nv[j] = temp;
			}
		}
	}
}

void CongTy::ThemNV()
{
	NV** newnv = new NV * [sl + 1];
	for (int i = 0; i < sl; i++)
	{
		newnv[i] = nv[i];
	}
	int l;
	cout << "-------------------------------" << endl;
	cout << "Nhap thong tin NV can them: " << endl;
	do
	{

		cout << "Nhap loai (NVBC: 1, NVHD: 2): ";
		cin >> l;
	} while (l < 1 || l > 2);
	if (l == 1)
		newnv[sl] = new NVBC;
	else
		newnv[sl] = new NVHD;
	newnv[sl]->Nhap();
	nv = newnv;
	sl++;
}

void CongTy::XoaNV(string ms)
{
	for (int i = 0; i < sl; i++)
	{
		if (DoiChuoiInHoa(nv[i]->GetMaSo()) == DoiChuoiInHoa(ms))
		{
			NV* temp = nv[i];
			for (int j = i; j < sl - 1; j++)
			{
				nv[i] = nv[i + 1];
			}
			sl--;
			delete temp;
			i--;
		}
	}
}

void CongTy::TimNVTheoMaSo(string k)
{
	int dem = 0;
	for (int i = 0; i < sl; i++)
	{
		if (DoiChuoiInHoa(nv[i]->GetMaSo()) == DoiChuoiInHoa(k))
		{
			nv[i]->Xuat();
			dem++;
		}
	}
	if (dem == 0)
		cout << "Khong co NV nao co ma so " << k << endl;
}
void CongTy::TimNVTheoHoTen(string k)
{
	int dem = 0;
	for (int i = 0; i < sl; i++)
	{
		if (DoiChuoiInHoa(nv[i]->GetHoTen()) == DoiChuoiInHoa(k))
		{
			nv[i]->Xuat();
			dem++;
		}
	}
	if (dem == 0)
		cout << "Khong co NV nao co ten " << k << endl;
}
void CongTy::TimNVTheoPhongBan(string k)
{
	int dem = 0;
	for (int i = 0; i < sl; i++)
	{
		if (DoiChuoiInHoa(nv[i]->GetPhongBan()) == DoiChuoiInHoa(k))
		{
			nv[i]->Xuat();
			dem++;
		}
	}
	if (dem == 0)
		cout << "Khong co NV nao o phong ban " << k << endl;
}

void CongTy::TimNVTheoTienLuong(int k)
{
	int dem = 0;
	for (int i = 0; i < sl; i++)
	{
		if (nv[i]->TinhTienLuong() == k)
		{
			nv[i]->Xuat();
			dem++;
		}
	}
	if (dem == 0)
		cout << "Khong co NV co tien luong " << k << endl;
}

CongTy::~CongTy()
{
	if (sl > 0)
	{
		for (int i = 0; i < sl; i++)
		{
			delete nv[i];
		}
		delete[] nv;
		nv = NULL;
		sl = 0;
	}
}