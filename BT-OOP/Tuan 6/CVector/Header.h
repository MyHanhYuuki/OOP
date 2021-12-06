#pragma once
#include <iostream> 

using namespace std;

class CVector {
public:
	double *vt;
	int dimension;
	CVector();
	~CVector();
	friend CVector operator+ (const CVector, const CVector);
	friend CVector operator- (const CVector, const CVector);
	friend CVector operator* (const CVector, const CVector);
	friend CVector operator* (const int, const CVector);
	friend ostream& operator<< (ostream& os, const CVector v);
	friend istream& operator>> (istream& os, CVector& v);
};
