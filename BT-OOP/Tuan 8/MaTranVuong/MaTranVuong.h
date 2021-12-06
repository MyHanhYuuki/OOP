#pragma once
#ifndef MTV
#define MTV
#include <iostream>
using namespace std;

class MaTranVuong
{
private:
	int n;
	int** p;

public:
	MaTranVuong();
	MaTranVuong(int);
	MaTranVuong(MaTranVuong&);
	~MaTranVuong();
	void input();
	void display();
	void oddMainDiagonal();
	int end_3SubDiagonalCount();
	bool isNegativeAboveMainDiagonal();
	void firstEvenBelowMainDiagonal();
	void decreasingSubDiagonal();
};

#endif