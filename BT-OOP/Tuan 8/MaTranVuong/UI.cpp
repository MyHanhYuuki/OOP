#include <iostream>
#include <vector>
#include "MaTranVuong.h"
using namespace std;

int main()
{
	MaTranVuong M;

	cout << "Nhap ma tran vuong:";
	M.input();
	cout << "\nMa tran vua nhap:\n"; M.display();
	cout << "\nGia tri cac phan tu le nam tren duong cheo chinh: "; M.oddMainDiagonal();
	cout << "\nSo luong cac phan tu co ki so cuoi la 3 tren duong cheo phu: " << M.end_3SubDiagonalCount();
	if (M.isNegativeAboveMainDiagonal()) cout << "\nCo phan tu am o nua ma tran phia tren duong cheo chinh.";
	else cout << "\nKhong co phan tu am o nua ma tran phia tren duong cheo chinh.";
	M.firstEvenBelowMainDiagonal();
	cout << "\nCac phan tu tren duong cheo phu theo thu tu giam dan:\n\t";
	M.decreasingSubDiagonal();
	cout << "\n";
	
	return 0;
}