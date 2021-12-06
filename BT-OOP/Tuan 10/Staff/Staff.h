#ifndef _SF
#define _SF
#include <string>
using namespace std;

class Staff
{
protected:
	string name, department, idnum;
	int type;

public:
	Staff(string = "", string = "", string = "", int = 0);
	virtual void input();
	virtual void display();
	virtual double wageCal() = 0;
	void setName(string);
	void setIDnum(string);
	virtual double getWC() = 0;
	virtual double getPC() = 0;
	virtual double getPayment() = 0;
	virtual double getOC() = 0;
	virtual double getWD() = 0;
	string getDepartment() { return department; }
	string getIDNum() { return idnum; }
	string getName() { return name; }
};

#endif