#include "CongTy.h"

int main()
{
	CongTy u;
	int select = 1;
	string s;
	int kt, type, k;
	while (select != 0)
	{
		cout << "\n---------------------------------------------------------------------------------";
		cout << "\n1.  Nhap thong tin nhan vien.";
		cout << "\n2.  Xuat thong tin cac nhan vien.";
		cout << "\n3.  Liet ke cac NVBC co he so luong tu 3.5 tro len.";
		cout << "\n4.  Dem so luong NVHD co so ngay cong la 26.";
		cout << "\n5.  Tinh tong tien luong da tra cho cac nhan vien phong ""Ke Toan"".";
		cout << "\n6.  Tinh tien luong trung binh cua cac NVBC.";
		cout << "\n7.  Kiem tra cong ty co NVHD khong di lam ngay nao.";
		cout << "\n8. Tim cac NVBC co he so luong cao nhat.";
		cout << "\n9. Sap xep danh sach NV tang dan theo ma so.";
		cout << "\n10. Them 1 NV moi.";
		cout << "\n11. Xoa 1 NV theo ma so.";
		cout << "\n12. Tim kiem NV.";
		cout << "\n0. Thoat chuong trinh.";
		cout << "\n---------------------------------------------------------------------------------";
		cout << "\nNhap lua chon: ";
		cin >> select;
		system("cls");
		switch (select)
		{
		case 1:
			u.Nhap();
			break;
		case 2:
			u.Xuat();
			cout << endl;
			system("pause");
			break;
		case 3:
			cout << "Danh sach cac NVBC co he so luong tu 3.5 tro len:" << endl;
			u.LietKeNVBCCoHeSoLuong35TroLen();
			cout << endl;
			system("pause");
			break;
		case 4:
			cout << "Co " << u.DemSLNVHDCoSoNgayCongLa26() << " NVHD co so ngay cong la 26." << endl;
			system("pause");
			break;
		case 5:
			cout << "Tong tien luong da tra cho cac nhan vien phong ""Ke Toan"" la: " << u.TinhTienLuongChoKeToan() << endl;
			system("pause");
			break;
		case 6:
			cout << "Tien luong trung binh cua cac NVBC: " << u.TinhTienLuongTBChoNVBC() << endl;
			system("pause");
			break;
		case 7:
			kt = u.KTCoNVHDKhongDiLamNgayNao();
			if (kt == 1) cout << "Khong co NVHD." << endl;
			else if (kt == 2) cout << "Co NVHD chua di lam ngay nao." << endl;
			else cout << "Tat ca NVHD deu da di lam." << endl;
			system("pause");
			break;
		case 8:
			cout << "Cac NVBC co he so luong cao nhat la: " << endl;
			u.TimNVBCCoHSLuongCaoNhat();
			cout << endl;
			system("pause");
			break;
		case 9:
			u.SapXepTangTheoMaSo();
			cout << "Danh sach da duoc sap xep tang dan theo ma so." << endl;
			system("pause");
			break;
		case 10:
			u.ThemNV();
			break;
		case 11:
			cout << "Nhap ma so NV muon xoa: ";
			cin.ignore();
			getline(cin, s);
			u.XoaNV(s);
			break;
		case 12:
			cout << "\n1. Tim kiem NV theo ma so";
			cout << "\n2. Tim kiem NV theo ho ten";
			cout << "\n3. Tim kiem NV theo phong ban";
			cout << "\n4. Tim kiem NV theo tien luong";
			cout << "\n---------------------------------";
			cout << "\nChon kieu tim kiem: ";
			cin >> type;
			switch (type)
			{
			case 1:
				cout << "Nhap ma so NV can tim: ";
				cin.ignore();
				getline(cin, s);
				u.TimNVTheoMaSo(s);
				break;
			case 2:
				cout << "Nhap ho ten NV can tim: ";
				cin.ignore();
				getline(cin, s);
				u.TimNVTheoHoTen(s);
				break;
			case 3:
				cout << "Nhap phong ban cua NV can tim: ";
				cin.ignore();
				getline(cin, s);
				u.TimNVTheoPhongBan(s);
				break;
			case 4:
				cout << "Nhap so tien luong cua NV can tim: ";
				cin >> k;
				u.TimNVTheoTienLuong(k);
				break;
			}
			system("pause");
			break;
		}
	}
	return 0;
}
