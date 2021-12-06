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
	friend Polynomial operator+(Polynomial, Polynomial);
	friend Polynomial operator-(Polynomial, Polynomial);
	friend Polynomial operator*(Polynomial, Polynomial);
	friend Polynomial operator/(Polynomial, Polynomial);
	friend Polynomial operator%(Polynomial, Polynomial);
	friend istream& operator>>(istream&, Polynomial&);
	friend ostream& operator<<(ostream&, Polynomial);
};

#endif