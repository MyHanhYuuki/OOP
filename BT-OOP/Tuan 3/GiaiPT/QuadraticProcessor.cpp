#include "QuadraticProcessor.h"
#include <iostream>
using namespace std;

void QuadraticProcessor::GetAmountQE() {
	cout << "\nNhap so luong phuong trinh can tinh: ";
	cin >> q_amount;
	q = new QuadraticEquation[q_amount];

	cout << "\nPhuong trinh bac 2 ax^2 + bx + c = 0\n";
	for (int i = 0; i < q_amount; i++) {
		cout << "\nNhap phuong trinh thu " << i + 1 << ":";
		q[i].InputQE();
	}
}

void QuadraticProcessor::ComputeQEs() {
	for (int i = 0; i < q_amount; i++) {
		cout << "\n" << i + 1 << "/";
		q[i].DisplayQE();
		q[i].ComputeQE();
		cout << "\n";
	}
}

QuadraticProcessor::~QuadraticProcessor() {
	q_amount = 0;
	delete[] q;
	q = NULL;
}