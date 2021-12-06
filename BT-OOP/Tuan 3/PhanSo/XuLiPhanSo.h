#ifndef PS
#define PS
#include <iostream>
using namespace std;
class PHANSO
{
private:
	int ts, ms;

public:
	PHANSO();
	PHANSO(double);
	PHANSO(double, double);
	void Get();
	void XuatPS();
	void RutGonPS(PHANSO&);
	void Max(PHANSO, PHANSO);
	void Tong(PHANSO, PHANSO);
	void Hieu(PHANSO, PHANSO);
	void Tich(PHANSO, PHANSO);
	void Thuong(PHANSO, PHANSO);
	double GiaTriThuc(PHANSO);
};
#endif