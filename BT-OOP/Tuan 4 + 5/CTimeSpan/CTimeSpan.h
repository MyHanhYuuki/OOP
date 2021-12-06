#ifndef CTS
#define CTS
#include <iostream>
using namespace std;
class CTimeSpan
{
private:
	int hour, minute, second;

public:
	CTimeSpan();
	void input(CTimeSpan&);
	void display(CTimeSpan);
	CTimeSpan add(CTimeSpan, CTimeSpan);
	CTimeSpan minus(CTimeSpan, CTimeSpan);
	bool equal(CTimeSpan T1, CTimeSpan T2);
	bool notEqual(CTimeSpan T1, CTimeSpan T2);
	bool biggerThan(CTimeSpan, CTimeSpan);
	bool biggerThanOrEqual(CTimeSpan, CTimeSpan);
	bool lessThan(CTimeSpan, CTimeSpan);
	bool lessThanOrEqual(CTimeSpan, CTimeSpan);
};

#endif