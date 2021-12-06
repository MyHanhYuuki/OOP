#include "LinearProcessor.h"
#include <iostream>
using namespace std;

void LinearProcessor::GetAmountLE() {
	cout << "\nNhap so luong phuong trinh can tinh: ";
	cin >> l_amount;
	l = new LinearEquation[l_amount];

	cout << "\nPhuong trinh bac 1 ax + b = 0\n";
	for (int i = 0; i < l_amount; i++) {
		cout << "\nNhap phuong trinh thu " << i + 1 << ": ";
		l[i].InputLE();
	}
}

void LinearProcessor::ComputeLEs() {
	for (int i = 0; i < l_amount; i++) {
		cout << "\n" << i + 1 << "/" << endl;
		l[i].DisplayLE();
		l[i].ComputeLE();
		cout << "\n";
	}
}

LinearProcessor::~LinearProcessor() {
	l_amount = 0;
	delete[] l;
	l = NULL;
}