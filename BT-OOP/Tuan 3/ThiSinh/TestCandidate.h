#ifndef TCN
#define TCN
#include "Candidate.h"

class TestCandidate
{
private:
	int n = 0;
	Candidate *c = new Candidate[n];

public:
	void getInfoAndDisplay();
	~TestCandidate();
};

#endif