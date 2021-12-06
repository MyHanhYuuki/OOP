#pragma once
#ifndef TR
#define TR
class Triangle
{
private:
	double a, b, c;

public:
	void Set();
	void Get(Triangle&);
	void Display(Triangle);
	bool isTriangle(Triangle);
	void Classifier(Triangle);
	double Perimeter(Triangle);
	double Square(Triangle);
};

#endif