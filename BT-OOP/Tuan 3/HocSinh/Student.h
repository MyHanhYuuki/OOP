#ifndef ST
#define ST
#include <string>
using namespace std;

class Student
{
private:
	string name, rank;
	double literature, math, avg;

public:
	Student(string, double, double);
	Student();
	void getInfo();
	void display();
	double Average();
	string Placement();
};

#endif