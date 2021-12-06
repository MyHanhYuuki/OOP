#include <iostream>
#include <cmath>
using namespace std;

class SOPHUC {
private:
	double thuc;
	double ao;
public:
	void xuat();
	void nhap();
	void cong(SOPHUC );
	void tru(SOPHUC);
	void tich(SOPHUC);
	void thuong(SOPHUC);
};

void SOPHUC::xuat() {
	if (this->thuc == 0 && this->ao == 0) {
		cout << 0;
	}
	if (this->thuc ==0) {
		cout << this->ao << "i";
	}
	if (this->ao == 0) {
		cout << this->thuc;
	}
	if (this->ao < 0) {
		cout << this->thuc << "-" << -this->ao << "i";
	}
	if (this->ao > 0) {
		cout << this->thuc << "+" << this->ao << "i";
	}
}
void SOPHUC::nhap() {
	cout << "Nhap so thuc: "; cin >> this->thuc;
	cout << "Nhap so ao: "; cin >> this->ao;
}
void SOPHUC::cong(SOPHUC a) {
	SOPHUC b;
	b.thuc = this->thuc + a.thuc;
	b.ao = this->ao + a.ao;
	cout << "Tong cua 2 so phuc: ";
	b.xuat();
	cout << endl;
}
void SOPHUC::tru(SOPHUC a) {
	SOPHUC b;
	b.thuc = this->thuc - a.thuc;
	b.ao = this->ao - a.ao;
	cout << "Hieu cua 2 so phuc: ";
	b.xuat();
	cout << endl;
}
void SOPHUC::tich(SOPHUC a) {
	SOPHUC b;
	b.thuc = (this->thuc*this->ao ) - (a.thuc*a.ao);
	b.ao = (this->thuc*a.ao) + (this->ao*a.thuc);
	cout << "Tich cua 2 so phuc: ";
	b.xuat();
	cout << endl;
}
void SOPHUC::thuong(SOPHUC a) {
	SOPHUC b;
	b.thuc = ((this->thuc * a.thuc) + (this->ao*a.ao)) / (pow(a.thuc, 2)+pow(a.ao,2));
	b.ao = ((this->ao*a.thuc) + (this->thuc*a.ao)) / (pow(a.thuc, 2) + pow(a.ao, 2));
	cout << "Thuong cua 2 so phuc: ";
	b.xuat();
	cout << endl;
}