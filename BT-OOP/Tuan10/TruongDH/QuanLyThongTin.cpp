#include "TRUONGDH.h"

int main()
{
    TRUONGDH uit;
    string s;
    long k;
    int kt, type;
    int select = 1;
    while (select != 0)
    {
        cout << "\n---------------------------------------------------------------------------------";
        cout << "\n1.  Nhap thong tin cac doi tuong xuat sac.";
        cout << "\n2.  Xuat thong tin cac doi tuong xuat sac.";
        cout << "\n3.  Doc thong tin cac doi tuong xuat sac tu file.";
        cout << "\n4.  Xuat thong tin cac doi tuong xuat sac ra file.";
        cout << "\n5.  Liet ke danh sach cac GV co tu 5 bai bao khoa hoc tro len.";
        cout << "\n6.  Dem so luong SV co diem ren luyen toi da.";
        cout << "\n7.  Tinh tong tien cap thuong cho cac NV co 3 sang kien kinh nghiem tro len.";
        cout << "\n8.  Tinh diem trung binh cua cac SV co diem ren luyen duoi 5.";
        cout << "\n9.  Kiem tra GV chua co bai bao khoa hoc.";
        cout << "\n10. Tim cac NV co so sang kien kinh nghiem nhieu nhat.";
        cout << "\n11. Sap xep danh sach DTXS tang dan theo ma so.";
        cout << "\n12. Sap xep danh sach DTXS giam dan theo tien thuong.";
        cout << "\n13. Them 1 DTXS moi.";
        cout << "\n14. Xoa 1 DTXS theo ma so.";
        cout << "\n15. Tim kiem DTXS.";
        cout << "\n16. Cap nhat thong tin DTXS.";
        cout << "\n0. Thoat chuong trinh.";
        cout << "\n---------------------------------------------------------------------------------";
        cout << "\nNhap lua chon: ";
        cin >> select;
        system("cls");
        switch (select)
        {
        case 1:
            uit.Nhap();
            break;
        case 2:
            uit.Xuat();
            break;
        case 3:
            uit.DocThongTinTuFile();
            cout << "Da doc thong tin tu file input.txt";
            break;
        case 4:
            uit.XuatThongTinRaFile();
            cout << "Da xuat thong tin ra file output.txt";
            break;
        case 5:
            cout << "Danh sach cac GV co tu 5 bai bao khoa hoc tro len:" << endl;
            uit.LietKeGVCoTu5BaiBao();
            break;
        case 6:
            cout << "Co " << uit.DemSVCoDRLToiDa() << " SV co diem ren luyen toi da.";
            break;
        case 7:
            cout << "Tong tien cap thuong cho cac NV co 3 sang kien kinh nghiem tro len: " << uit.TinhTongTienThuongNVCo3SKKNTroLen();
            break;
        case 8:
            cout << "DTB cua cac SV co diem ren luyen duoi 50 la: " << uit.TinhDTBCuaSVCoDRLDuoi50();
            break;
        case 9:
            kt = uit.KiemTraGVChuaCoBaiBao();
            if (kt == 1) cout << "Khong co thong tin ve GV.";
            else if (kt == 2) cout << "Co GV chua co bai bao.";
            else cout << "Tat ca GV deu co bai bao.";
            break;
        case 10:
            cout << "Cac sinh vien co so sang kien kinh nghiem nhieu nhat la: " << endl;
            uit.TimNVCoSKKNNhieuNhat();
            break;
        case 11:
            uit.SapXepMaSoTangDan();
            cout << "Danh sach da duoc sap xep tang dan theo ma so.";
            break;
        case 12:
            uit.SapXepMaSoGiamDan();
            cout << "Danh sach da duoc sap xep giam dan theo tien thuong.";
            break;
        case 13:
            uit.ThemDTXS();
            break;
        case 14:
            cout << "Nhap ma so DTXS muon xoa: ";
            cin.ignore();
            getline(cin, s);
            uit.XoaDTXS(s);
            break;
        case 15:
            cout << "\n1. Tim kiem DTXS theo ma so";
            cout << "\n2. Tim kiem DTXS theo ho ten";
            cout << "\n3. Tim kiem DTXS theo khoa";
            cout << "\n4. Tim kiem DTXS theo tien thuong";
            cout << "\n---------------------------------";
            cout << "\nChon kieu tim kiem: ";
            cin >> type;
            switch (type)
            {
            case 1:
                cout << "Nhap ma so DTXS can tim: ";
                cin.ignore();
                getline(cin, s);
                uit.TimDTXSTheoTungMaSo(s);
                break;
            case 2:
                cout << "Nhap ho ten DTXS can tim: ";
                cin.ignore();
                getline(cin, s);
                uit.TimDTXSTheoTungHoTen(s);
                break;
            case 3:
                cout << "Nhap khoa cua DTXS can tim: ";
                cin.ignore();
                getline(cin, s);
                uit.TimDTXSTheoTungKhoa(s);
                break;
            case 4:
                cout << "Nhap so tien thuong cua DTXS can tim: ";
                cin >> k;
                uit.TimDTXSTheoTungTienThuong(k);
                break;
            }
            break;
        case 16:
            cout << "Nhap ma so DTXS can cap nhat thong tin: ";
            cin.ignore();
            getline(cin, s);
            uit.CapNhatThongTinTheoMaSo(s);
            break;
        case 0:
            break;
        }
        cout << endl << endl;
        system("pause");
    }
    return 0;
}
