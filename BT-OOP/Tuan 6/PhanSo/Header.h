#ifndef PS
#define PS

#include <iostream>
using namespace std;

class PhanSo {
private:
	int tu, mau;
public:
	PhanSo(int ,int);
	PhanSo(int);
	friend PhanSo operator+(PhanSo const&, PhanSo const&);
	friend PhanSo operator-(PhanSo const&, PhanSo const&);
	friend PhanSo operator*(PhanSo const&, PhanSo const&);
	friend PhanSo operator/(PhanSo const&, PhanSo const&);
	friend void operator==(PhanSo&, PhanSo &);
	friend void operator!=(PhanSo&, PhanSo&);
	friend void operator>(PhanSo&, PhanSo&);
	friend void operator>=(PhanSo&, PhanSo&);
	friend void operator<(PhanSo&, PhanSo&);
	friend void operator<=(PhanSo&, PhanSo&);
	friend ostream& operator<<(ostream& os, const PhanSo&);
	friend istream& operator>>(istream& is, PhanSo& a);
	double thapphan();
	void xuat();
	void rutgon();
};


#endif // !1

