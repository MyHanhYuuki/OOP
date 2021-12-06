#ifndef CD
#define CD
class CDate
{
private:
	int day, month, year;

public:
	CDate();
	bool isDate();
	int positionInAYear();
	void positionInAMonth(CDate&, int pos);
	CDate add(CDate&, int);
	CDate minus(CDate&, int);
	int distance(CDate, CDate);
	CDate add1Day(CDate&);
	CDate minus1Day(CDate&);
	void input(CDate&);
	void display(CDate);
};

#endif