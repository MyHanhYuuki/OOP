#ifndef _QEQ
#define _QEQ

class QuadraticEquation
{
private:
	double a, b, c;

public:
	QuadraticEquation();
	QuadraticEquation(double);
	QuadraticEquation(double, double);
	QuadraticEquation(double, double, double);
	void InputQE();
	void DisplayQE();
	void ComputeQE();
};

#endif