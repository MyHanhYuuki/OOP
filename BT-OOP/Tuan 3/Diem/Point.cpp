#include "Point.h"
#include <iostream>
#include <math.h>
using namespace std;

void POINT::Set() {
	this->x = this->y = 0;
}

void POINT::Get(POINT& p) {
	cout << "\nx = ";
	cin >> this->x;
	cout << "y = ";
	cin >> this->y;
}

void POINT::Display() {
	cout << "(" << this->x << ", " << this->y << ")" << endl;
}

void POINT::Move(POINT& p) {
	cout << "Nhap toa do moi:" << endl;
	cout << "x = ";
	cin >> this->x;
	cout << "y = ";
	cin >> this->y;
}

bool POINT::Duplicate(POINT p1, POINT p2) {
	return (p1.x == p2.x && p1.y == p2.y) ? true : false;
}

double POINT::Distance(POINT p1, POINT p2) {
	return sqrt(pow((p2.x - p1.x), 2) + pow((p2.y - p1.y), 2));
}

void POINT::Symmetry(POINT p) {
	cout << "Toa do diem doi xung qua goc toa do voi diem vua duoc chon: (" << -p.x << ", " << -p.y << ")" << endl;
}

bool POINT::isTriangle(POINT p1, POINT p2, POINT p3) {
	double a = sqrt(pow((p2.x - p1.x), 2) + pow((p2.y - p1.y), 2));
	double b = sqrt(pow((p3.x - p2.x), 2) + pow((p3.y - p2.y), 2));
	double c = sqrt(pow((p1.x - p3.x), 2) + pow((p1.y - p3.y), 2));
	return (a < b + c && b < a + c && c < a + b) ? true : false;
}

double POINT::Perimeter(POINT p1, POINT p2, POINT p3) {
	return sqrt(pow((p2.x - p1.x), 2) + pow((p2.y - p1.y), 2)) + sqrt(pow((p3.x - p2.x), 2) + pow((p3.y - p2.y), 2)) + sqrt(pow((p1.x - p3.x), 2) + pow((p1.y - p3.y), 2));
}

double POINT::Square(POINT p1, POINT p2, POINT p3) {
	double P = (p1, p2, p3).Perimeter(p1, p2, p3) / 2.0;
	return sqrt(P * (P - sqrt(pow((p2.x - p1.x), 2) + pow((p2.y - p1.y), 2))) * (P - sqrt(pow((p3.x - p2.x), 2) + pow((p3.y - p2.y), 2))) * (P - sqrt(pow((p1.x - p3.x), 2) + pow((p1.y - p3.y), 2))));
}