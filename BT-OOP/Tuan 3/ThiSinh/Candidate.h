#ifndef CDT
#define CDT
#include <string>
using namespace std;

class Candidate
{
private:
	string name;
	int id, math, literature, english, day, month, year;

public:
	void setId();
	void setName();
	void setDOB();
	bool checkDate(int, int, int);
	void setMath();
	void setLiterature();
	void setEnglish();
	void displayInfo();
	void higherThan15();
};

#endif