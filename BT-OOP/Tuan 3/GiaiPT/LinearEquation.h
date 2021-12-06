#ifndef LEC
#define LEC

class LinearEquation
{
private:
	double a, b;

public:
	LinearEquation();
	LinearEquation(double);
	LinearEquation(double, double);
	void InputLE();
	void DisplayLE();
	void ComputeLE();
};

#endif