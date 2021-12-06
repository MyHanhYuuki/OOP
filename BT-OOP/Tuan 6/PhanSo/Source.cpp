#include "Header.h"
using namespace std;

int main() {
	
	PhanSo a(0,0), b(0,0);
	cin >> a;
	cout << "Phan so thu nhat: " <<  a << endl;
	
	cin >> b;
	cout << "Phan so thu hai: " << b << endl;

	cout << "Tong: " << a + b << endl;
	cout << "Hieu: " << a - b << endl;
	cout << "Tich: " << a * b << endl;
	cout << "Thuong: " << a / b << endl;
	
	cout << "A == B ?: ";	a == b;
	cout << "A != B ?: ";	a != b;
	cout << "A > B ?: ";	a > b;
	cout << "A >= B ?: ";	a >= b;
	cout << "A < B ?: ";	a < b;
	cout << "A <= B ?: ";	a <= b;
	
	return 0;
}