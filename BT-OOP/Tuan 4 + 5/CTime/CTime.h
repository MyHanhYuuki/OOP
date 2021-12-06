#ifndef CT
#define CT
using namespace std;

class CTime
{
private:
	int hour, minute, second;

public:
	CTime();
	bool lessThan(CTime, CTime);
	CTime add(CTime, CTime);
	CTime minus(CTime, CTime);
	CTime add1Sec(CTime&);
	CTime minus1Sec(CTime&);
	void input(CTime&);
	void display(CTime);
};

#endif