#ifndef _RSF
#define _RSF
#include "Staff.h"

class Regular_Staff :public Staff
{
private:
	double wage_coef;
	double pa_coef; // position allowance

public:
	Regular_Staff(string = "", string = "", string = "", int = 0, double = 0, double = 0);
	void input();
	void display();
	double wageCal();
	double getWC() { return wage_coef; }
	double getPC() { return pa_coef; }
	double getPayment() { return -1; }
	double getOC() { return -1; }
	double getWD() { return -1; }
};

#endif