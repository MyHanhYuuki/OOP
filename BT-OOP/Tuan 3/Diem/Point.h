#pragma once
#ifndef PNT
#define PNT
class POINT
{
private:
	double x, y;

public:
	void Set();
	void Get(POINT&);
	void Display();
	void Move(POINT&);
	bool Duplicate(POINT, POINT);
	double Distance(POINT, POINT);
	void Symmetry(POINT);
	bool isTriangle(POINT, POINT, POINT);
	double Perimeter(POINT, POINT, POINT);
	double Square(POINT, POINT, POINT);
};
#endif