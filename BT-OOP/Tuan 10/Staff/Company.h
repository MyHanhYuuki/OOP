#ifndef _COM
#define _COM
#include <vector>
#include "Staff.h"
#include "Contract_Staff.h"
#include "Regular_Staff.h"

class Company
{
private:
	vector<Staff*> data;
	int amount;

public:
	Company();
	void input();
	void display();
	void wcAbove3AndAHalf();
	int workdayEqual26();
	double accountantWage();
	double averageRSWage();
	bool noWorkdayCS();
	void highestWCRS();
	void IDNumSort();
	void findID();
	void findName();
	void findDepartment();
	void findWage(float);
	void addBack();
	void remove(string);
};

#endif