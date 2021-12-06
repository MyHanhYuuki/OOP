#pragma once
#include "DIEM.h"
#include <iostream>
using namespace std;
class DAGIAC {
private:
	DIEM* peak; // vertex, not peak :3 - Ecsta
	int NumberOfPeak;
public:
	DAGIAC();
	DAGIAC(int);
	void Move(double, double);
	void Zoom(double);
	void Rotate(double);
	void Input();
	void Output();
	~DAGIAC();
};
