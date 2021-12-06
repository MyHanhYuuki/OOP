#include "TRUONGDH.h"

TRUONGDH::TRUONGDH()
{
	pdtxs = NULL;
	sl = 0;
}

int TRUONGDH::GetSL()
{
	return sl;
}

void TRUONGDH::Nhap()
{
	int l;
	do
	{
		cout << "Nhap so duong DTXS: ";
		cin >> sl;
	} while (sl < 1);
	pdtxs = new DTXS * [sl];
	for (int i = 0; i < sl; i++)
	{
		cout << "-------------------------------" << endl;
		cout << "Nhap thong tin DTXS thu " << i + 1 << " :" << endl;
		do
		{
			cout << "Nhap loai (GV: 1, SV: 2, NV: 3): ";
			cin >> l;
		} while (l < 1 || l > 3);
		if (l == 1)
			pdtxs[i] = new GV;
		else if (l == 2)
			pdtxs[i] = new SV;
		else
			pdtxs[i] = new NV;
		pdtxs[i]->Nhap();
	}
}

void TRUONGDH::Xuat()
{
	for (int i = 0; i < sl; i++)
	{
		pdtxs[i]->Xuat();
	}
}

void TRUONGDH::LietKeGVCoTu5BaiBao()
{
	int dem = 0;
	for (int i = 0; i < sl; i++)
	{
		if (pdtxs[i]->GetSoBB() >= 5)
		{
			dem++;
			pdtxs[i]->Xuat();
		}
	}
	if (dem == 0) cout << "Khong co GV nao co tu 5 bai bao tro len.\n";
}

int TRUONGDH::DemSVCoDRLToiDa()
{
	int dem = 0;
	for (int i = 0; i < sl; i++)
	{
		if (pdtxs[i]->GetDRL() == 100)
		{
			dem++;
		}
	}
	return dem;
}

long TRUONGDH::TinhTongTienThuongNVCo3SKKNTroLen()
{
	long thuong = 0;
	for (int i = 0; i < sl; i++)
	{
		if (pdtxs[i]->GetSoSK() >= 3)
		{
			thuong += pdtxs[i]->TinhTienThuong();
		}
	}
	return thuong;
}

double TRUONGDH::TinhDTBCuaSVCoDRLDuoi50()
{
	double tongDTB = 0;
	int dem = 0;
	for (int i = 0; i < sl; i++)
	{
		if (pdtxs[i]->GetDRL() < 50 && pdtxs[i]->GetDRL() != -1)
		{
			dem++;
			tongDTB += pdtxs[i]->GetDTB();
		}
	}
	return dem > 0 ? tongDTB / dem : 0;
}

int TRUONGDH::KiemTraGVChuaCoBaiBao()
{
	int kt = 1;
	for (int i = 0; i < sl; i++)
	{
		if (pdtxs[i]->GetLoai() == 2)
		{
			if (pdtxs[i]->GetSoBB() == 0)
			{
				kt = 2;
				break;
			}
		}
		kt = 3;
	}
	return kt;
}

void TRUONGDH::TimNVCoSKKNNhieuNhat()
{
	int skmax = -1;
	int vitri = -1;
	for (int i = 0; i < sl; i++)
	{
		if (pdtxs[i]->GetLoai() == 3)
		{
			skmax = pdtxs[i]->GetSoSK();
			vitri = i;
			break;
		}
	}
	if (vitri == -1)
	{
		cout << "Khong co NV" << endl;
	}
	else
	{
		for (int i = vitri + 1; i < sl; i++)
		{
			if (pdtxs[i]->GetSoSK() > skmax)
			{
				skmax = pdtxs[i]->GetSoSK();
				vitri = i;
			}
		}
		for (int i = 0; i < sl; i++)
		{
			if (pdtxs[i]->GetSoSK() == skmax)
			{
				pdtxs[i]->Xuat();
			}
		}
	}
}

string TRUONGDH::DoiChuoiInHoa(string s)
{
	for (int i = 0; i < s.length(); i++)
	{
		s[i] = toupper(s[i]);
	}
	return s;
}

string TRUONGDH::DoiChuoiInThuong(string s)
{
	for (int i = 0; i < s.length(); i++)
	{
		s[i] = tolower(s[i]);
	}
	return s;
}

void TRUONGDH::SapXepMaSoTangDan()
{
	for (int i = 0; i < sl - 1; i++)
	{
		for (int j = 0; j < sl; j++)
		{
			if (DoiChuoiInHoa(pdtxs[i]->GetMaSo()) > DoiChuoiInHoa(pdtxs[j]->GetMaSo()))
			{
				DTXS* temp = pdtxs[i];
				pdtxs[i] = pdtxs[j];
				pdtxs[j] = temp;
			}
		}
	}
}
void TRUONGDH::SapXepMaSoGiamDan()
{
	for (int i = 0; i < sl - 1; i++)
	{
		for (int j = 0; j < sl; j++)
		{
			if (pdtxs[i]->TinhTienThuong() < pdtxs[i]->TinhTienThuong())
			{
				DTXS* temp = pdtxs[i];
				pdtxs[i] = pdtxs[j];
				pdtxs[j] = temp;
			}
		}
	}
}

void TRUONGDH::TimDTXSTheoTungKhoa(string k)
{
	int dem = 0;
	for (int i = 0; i < sl; i++)
	{
		if (DoiChuoiInHoa(pdtxs[i]->GetKhoa()) == DoiChuoiInHoa(k))
		{
			pdtxs[i]->Xuat();
			dem++;
		}
	}
	if (dem == 0)
		cout << "Khong co DTXS nao thuoc khoa " << k << endl;
}

void TRUONGDH::TimDTXSTheoTungMaSo(string k)
{
	int dem = 0;
	for (int i = 0; i < sl; i++)
	{
		if (DoiChuoiInHoa(pdtxs[i]->GetMaSo()) == DoiChuoiInHoa(k))
		{
			pdtxs[i]->Xuat();
			dem++;
		}
	}
	if (dem == 0)
		cout << "Khong co DTXS nao co ma so " << k << endl;
}

void TRUONGDH::TimDTXSTheoTungHoTen(string k)
{
	int dem = 0;
	for (int i = 0; i < sl; i++)
	{
		if (DoiChuoiInHoa(pdtxs[i]->GetHoTen()) == DoiChuoiInHoa(k))
		{
			pdtxs[i]->Xuat();
			dem++;
		}
	}
	if (dem == 0)
		cout << "Khong co DTXS nao co ho ten " << k << endl;
}

void TRUONGDH::TimDTXSTheoTungTienThuong(long k)
{
	int dem = 0;
	for (int i = 0; i < sl; i++)
	{
		if (pdtxs[i]->TinhTienThuong() == k)
		{
			pdtxs[i]->Xuat();
			dem++;
		}
	}
	if (dem == 0)
		cout << "Khong co DTXS nao co so tien thuong " << k << endl;
}

void TRUONGDH::CapNhatThongTinTheoMaSo(string ms)
{
	int kt = -1;
	for (int i = 0; i < sl; i++)
	{
		if (DoiChuoiInHoa(ms) == DoiChuoiInHoa(pdtxs[i]->GetMaSo()))
		{
			kt = 1;
			string ht, kh;
			cout << "Nhap ho ten: ";
			cin.ignore();
			getline(cin, ht);
			pdtxs[i]->SetHoten(ht);
			cout << "Nhap khoa: ";
			getline(cin, kh);
			pdtxs[i]->SetKhoa(kh);
			if (pdtxs[i]->GetLoai() == 1)
			{
				int bb;
				do
				{
					cout << "Nhap so bai bao: ";
					cin >> bb;
				} while (bb < 0);
				pdtxs[i]->SetSoBB(bb);
			}
			else if (pdtxs[i]->GetLoai() == 2)
			{
				double drl, dtb;
				do
				{
					cout << "Nhap diem ren luyen: ";
					cin >> drl;
				} while (drl < 0 || drl > 100);
				do
				{
					cout << "Nhap diem trung binh: ";
					cin >> dtb;
				} while (dtb < 0 || dtb > 10);
				pdtxs[i]->SetDRL(drl);
				pdtxs[i]->SetDTB(dtb);
			}
			else
			{
				int sk;
				do
				{
					cout << "Nhap so sang kien: ";
					cin >> sk;
				} while (sk < 0);
				pdtxs[i]->SetSoSK(sk);
			}
		}
	}
	if (kt == -1) cout << "Khong tim thay thong tin DTXS co ma so " << ms << endl;
}

void TRUONGDH::DocThongTinTuFile()
{
	ifstream input("input.txt");
	input >> sl;
	pdtxs = new DTXS * [sl];
	for (int i = 0; i < sl; i++)
	{
		int l;
		input >> l; 
		string maso, hoten, khoa;
		input.ignore();
		getline(input, maso);
		getline(input, hoten);
		getline(input, khoa);
		if (l == 1)
		{
			int sobb;
			input >> sobb;
			pdtxs[i] = new GV(maso, hoten, khoa, sobb);
		}
		else if (l == 2)
		{
			double drl, dtb;
			input >> drl >> dtb;
			pdtxs[i] = new SV(maso,hoten, khoa, drl, dtb);
		}
		else
		{

			int sosk;
			input >> sosk;
			pdtxs[i] = new NV(maso, hoten, khoa, sosk);
		}
	}
	input.close();
}

void TRUONGDH::XuatThongTinRaFile()
{
	ofstream output("output.txt", ios::out);
	for (int i = 0; i < sl; i++)
	{
		output << "-------------------------------" << endl;
		output << "MS: " << pdtxs[i]->GetMaSo() << "\tTen: " << pdtxs[i]->GetHoTen() << "\tKhoa: " << pdtxs[i]->GetKhoa() << "\tLoai: " << (pdtxs[i]->GetLoai() == 1 ? "GV" : pdtxs[i]->GetLoai() == 2 ? "SV" : pdtxs[i]->GetLoai() == 3 ? "NV" : "???");
		if (pdtxs[i]->GetLoai() == 1)
		{
			output << "\nSo bai bao: " << pdtxs[i]->GetSoBB() << "\tTien Thuong: " << pdtxs[i]->TinhTienThuong() << endl;
		}
		else if (pdtxs[i]->GetLoai() == 2)
		{
			output << "\nDRL: " << pdtxs[i]->GetDRL() << "\tDTB: " << pdtxs[i]->GetDTB() << "\tTien Thuong: " << pdtxs[i]->TinhTienThuong() << endl;
		}
		else
		{
			output << "\nSo sang kien: " << pdtxs[i]->GetSoSK() << "\tTien Thuong: " << pdtxs[i]->TinhTienThuong() << endl;
		}
	}
	output.close();
}

void TRUONGDH::ThemDTXS()
{
	DTXS** newpdtxs = new DTXS * [sl + 1];
	for (int i = 0; i < sl; i++)
	{
		newpdtxs[i] = pdtxs[i];
	}
	int l;
	cout << "-------------------------------" << endl;
	cout << "Nhap thong tin DTXS can them: " << endl;
	do
	{
		cout << "Nhap loai (GV: 1, SV: 2, NV: 3): ";
		cin >> l;
	} while (l < 1 || l > 3);
	if (l == 1)
		newpdtxs[sl] = new GV;
	else if (l == 2)
		newpdtxs[sl] = new SV;
	else
		newpdtxs[sl] = new NV;
	newpdtxs[sl]->Nhap();
	pdtxs = newpdtxs;
	sl++;
}

void TRUONGDH::XoaDTXS(string ms)
{
	for (int i = 0; i < sl; i++)
	{
		if (DoiChuoiInHoa(pdtxs[i]->GetMaSo()) == DoiChuoiInHoa(ms))
		{
			DTXS* temp = pdtxs[i];
			for (int j = i; j < sl-1; j++)
			{
				pdtxs[i] = pdtxs[i + 1];
			}
			sl--;
			delete temp;
			i--;
		}
	}
}

TRUONGDH::~TRUONGDH()
{
	if (sl > 0)
	{
		for (int i = 0; i < sl; i++)
		{
			delete pdtxs[i];
		}
		delete[] pdtxs;
		pdtxs = NULL;
		sl = 0;
	}
}