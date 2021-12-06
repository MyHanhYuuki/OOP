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
	friend CTimeSpan operator+(CTimeSpan, CTimeSpan);
	friend CTimeSpan operator-(CTimeSpan, CTimeSpan);
	friend istream& operator>>(istream&, CTimeSpan&);
	friend ostream& operator<<(ostream&, CTimeSpan);
	friend bool operator==(CTimeSpan, CTimeSpan);
	friend bool operator!=(CTimeSpan, CTimeSpan);
	friend bool operator<(CTimeSpan, CTimeSpan);
	friend bool operator>(CTimeSpan, CTimeSpan);
	friend bool operator<=(CTimeSpan, CTimeSpan);
	friend bool operator>=(CTimeSpan, CTimeSpan);
};

#endif