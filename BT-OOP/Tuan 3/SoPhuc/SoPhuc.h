#ifndef SP
#define SP

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
	void cong(SOPHUC);
	void tru(SOPHUC);
	void tich(SOPHUC);
	void thuong(SOPHUC);
};

void xuat();
void nhap();
void cong(SOPHUC );
void tru(SOPHUC );
void tich(SOPHUC );
void thuong(SOPHUC );
#endif // !SP

