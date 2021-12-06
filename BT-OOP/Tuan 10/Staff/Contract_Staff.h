#ifndef _CSF
#define _CSF
#include "Staff.h"

class Contract_Staff :public Staff
{
private:
	double payment;
	double workday;
	double overtime_coef;

public:
	Contract_Staff(string = "", string = "", string = "", int = 0, double = 0, double = 0, double = 0);
	void input();
	void display();
	double wageCal();
	double getPayment() { return payment; }
	double getWC() { return -1; }
	double getOC() { return overtime_coef; }
	double getPC() { return -1; }
	double getWD() { return workday; }
};

#endif