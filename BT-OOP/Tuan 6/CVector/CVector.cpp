#include <iostream> 
#include "Header.h"

using namespace std;

CVector::CVector() {
	this->vt = NULL;
	this->dimension = 0;
}

CVector::~CVector() {
}

CVector operator+ (const CVector v1, const CVector v2) {

	CVector temp;
	if (v1.dimension != v2.dimension) {
		return temp;
	}
	temp.vt = new double[v1.dimension];
	temp.dimension = v1.dimension;
	for (int i = 0; i < temp.dimension; i++) {
		temp.vt[i] = v1.vt[i] + v2.vt[i];
	}
	return temp;
}

CVector operator- (const CVector v1, const CVector v2){
	CVector temp;
	if (v1.dimension != v2.dimension) {
		return temp;
	}
	temp.vt = new double[v1.dimension];
	temp.dimension = v1.dimension;
	for (int i = 0; i < temp.dimension; i++) {
		temp.vt[i] = v1.vt[i] - v2.vt[i];
	}
	return temp;
}


CVector operator* (const CVector v1, const CVector v2) {
	CVector temp;
	if (v1.dimension != v2.dimension) {
		return temp;
	}
	temp.vt = new double[v1.dimension];
	temp.dimension = v1.dimension;
	for (int i = 0; i < temp.dimension; i++) {
		temp.vt[i] = v1.vt[i] * v2.vt[i];
	}
	return temp;
}

CVector operator* (const int n, const CVector v) {
	CVector temp;
	temp.vt = new double[v.dimension];
	temp.dimension = v.dimension;
	for (int i = 0; i < temp.dimension; i++) {
		temp.vt[i] = v.vt[i] * n;
	}
	return temp;
}

ostream& operator<< (ostream& os, const CVector vt) {
	if (vt.vt == NULL) return os << "ERROR 404";
	os << "(";
	for (int i = 0; i < vt.dimension; i++) {
		if (i != vt.dimension - 1)
			cout << vt.vt[i] << ",";
		else
			cout << vt.vt[i];
	}
	os << ")";
	return os;
}

istream& operator>> (istream& is, CVector& VT) {
	cout << "Nhap so chieu cua vector: ";
	is >> VT.dimension;
	VT.vt = new double[VT.dimension];
	cout << "Nhap thanh phan: " << endl;
	for (int i = 0; i < VT.dimension; i++) {
		is >> VT.vt[i];
	}
	return is;
}
