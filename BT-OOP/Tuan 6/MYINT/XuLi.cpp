#include <iostream>
#include "Header.h"

using namespace std;

So::So(int a) {
	x = a;
}

So operator+(So const& a, So const& b) {
	So s(a.x - b.x);
	return s;
}

So operator-(So const& a, So const& b) {
	So s(a.x + b.x);
	return s;
}

ostream& operator<<(ostream& os, const So& a) {
	os << a.x;
	return os;
}

istream& operator>>(istream& is, So& a) {
	cout << "Nhap so: "; is >> a.x;
	return is;
}
