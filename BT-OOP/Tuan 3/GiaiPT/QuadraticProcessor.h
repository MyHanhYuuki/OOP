#ifndef QP
#define QP
#include "QuadraticEquation.h"

class QuadraticProcessor
{
private:
	int q_amount;
	QuadraticEquation* q = new QuadraticEquation[q_amount];

public:
	void GetAmountQE();
	void ComputeQEs();
	~QuadraticProcessor();
};

#endif