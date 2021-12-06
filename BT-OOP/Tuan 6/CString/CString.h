#ifndef  CS
#define CS
#include<iostream>
using namespace std;
class cs
{
private:
	char* a;
	int size;
public:
	cs(char*);
	cs(const cs&);
	~cs();
	cs operator + (cs);
	cs operator = (cs&);
	bool operator == (cs);
	bool operator >= (cs);
	bool operator <= (cs);
	bool operator > (cs);
	bool operator < (cs);
	friend ostream& operator<<(ostream& , const cs); 
	friend istream& operator>>(istream& ,  cs&);
};
#endif 

