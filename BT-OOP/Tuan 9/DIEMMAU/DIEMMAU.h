#pragma once
#include "DIEM.h"
#include "MAU.h"
using namespace std;

class DIEMMAU :public DIEM, public MAU
{
public:
	DIEMMAU(double = 0, double = 0, int = 0, int = 0, int = 0);
	~DIEMMAU();
	void input();
	void display();
	bool isDuplicate(DIEMMAU);
	friend istream& operator>>(istream&, DIEMMAU&);
	friend ostream& operator<<(ostream&, DIEMMAU);
	friend bool operator==(DIEMMAU, DIEMMAU);
};