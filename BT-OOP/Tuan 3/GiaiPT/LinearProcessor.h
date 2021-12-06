#ifndef LP
#define LP
#include "LinearEquation.h"

class LinearProcessor
{
private:
	int l_amount = 0;
	LinearEquation* l = new LinearEquation[l_amount];

public:
	void GetAmountLE();
	void ComputeLEs();
	~LinearProcessor();
};

#endif