#pragma once
#ifndef MT
#define MT
#include <iostream>
using namespace std;

class MaTran
{
private:
	int sd, sc;
	int** p;

public:
	MaTran();
	MaTran(int, int);
	MaTran(MaTran&);
	~MaTran();
	void input();
	void display();
	bool isPrime(int);
	void displayPrime();
	int squareCount();
	bool isPerfect(int);
	void perfectSum(int);
	bool isSymmetric(int);
	void averageSymmetric(int);
	void increasing(int);
};

#endif