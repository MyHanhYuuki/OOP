#ifndef POL
#define POL
#include <iostream>
#include <vector>
using namespace std;

class Polynomial
{
private:
	int deg;
	vector<double> coef;

public:
	Polynomial();
	bool validate(Polynomial);
	void input(Polynomial&);
	void display(Polynomial);
	Polynomial add(Polynomial, Polynomial);
	Polynomial minus(Polynomial, Polynomial);
	Polynomial multiply(Polynomial, Polynomial);
	Polynomial divide_q(Polynomial, Polynomial);
	Polynomial divide_r(Polynomial, Polynomial);
};

#endif