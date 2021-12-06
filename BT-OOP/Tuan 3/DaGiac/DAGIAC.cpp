#include "DAGIAC.h"
#include "DIEM.h"
#include<cmath>
#define PI 3.1416
using namespace std;

DAGIAC::DAGIAC() {
	this->NumberOfPeak = 0;
	this->peak = NULL;
}

DAGIAC::DAGIAC(int n) {
	this->peak = new DIEM[n];
	this->NumberOfPeak = n;
	for (int i = 0; i < this->NumberOfPeak; i++) {
		this->peak[i].SetX(0);
		this->peak[i].SetY(0);
	}
}

void DAGIAC::Move(double x, double y) {
	for (int i = 0; i < this->NumberOfPeak; i++) {
		this->peak[i].Move(x, y);
	}
}

void DAGIAC::Zoom(double k) {
	for (int i = 0; i < this->NumberOfPeak; i++) {
		double x = this->peak[i].GetX() * k;
		this->peak[i].SetX(x);
		double y = this->peak[i].GetY() * k;
		this->peak[i].SetY(y);
	}
}

void DAGIAC::Rotate(double angle) {
	angle = angle * PI / 180;
	for (int i = 0; i < this->NumberOfPeak; i++) {
		double x = this->peak[i].GetX();
		double y = this->peak[i].GetY();
		for (int i = 0; i < this->NumberOfPeak; i++) {
			this->peak[i].SetX(x * cos(angle) - y * sin(angle));
			this->peak[i].SetY(x * sin(angle) + y * cos(angle));
		}
	}
}

void DAGIAC::Input() {
	for (int i = 0; i < this->NumberOfPeak; i++) {
		cout << "Enter coordinate " << i + 1 << " :" << endl;
		cin >> this->peak[i];
	}
	cout << "---------------------------" << endl;
}

void DAGIAC::Output() {
	cout << "Multiangle with " << this->NumberOfPeak << "\n";
	for (int i = 0; i < this->NumberOfPeak; i++) {
		cout << this->peak[i];
	}
}

DAGIAC::~DAGIAC() {
	this->NumberOfPeak = 0;
	delete[] this->peak;
}