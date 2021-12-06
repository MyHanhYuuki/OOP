#include "Polynomial.h"
#include <iostream>
using namespace std;

Polynomial::Polynomial() {
	this->deg = 0;
}

bool Polynomial::validate(Polynomial P) {
	int count = 0;
	if (P.coef.size() == 0) return false;
	for (int i = 0; i < P.coef.size(); i++) {
		if (P.coef[i] == 0) count++;
	}
	if (count == P.coef.size() - 1) return false;
	return true;
}

Polynomial operator+(Polynomial P1, Polynomial P2) {
	Polynomial Res, temp_adder;
	int temp = abs(P1.deg - P2.deg);
	
	if (P1.deg > P2.deg) {
		P2.coef.resize(P1.coef.size());
		temp_adder.coef.resize(P1.coef.size());
		for (int i = 0; i < P2.deg; i++) {
			int a = i + temp;
			temp_adder.coef[a] = P2.coef[i];
		}
		Res.deg = P1.coef.size();
	}
	else {
		P1.coef.resize(P2.coef.size());
		temp_adder.coef.resize(P2.coef.size());
		for (int i = 0; i < P1.deg; i++) {
			int a = i + temp;
			temp_adder.coef[a] = P1.coef[i];
		}
		Res.deg = P2.coef.size();
	}
	Res.coef.resize(Res.deg);

	if (P1.deg > P2.deg) {
		for (int i = 0; i < Res.coef.size(); i++) {
			Res.coef[i] = P1.coef[i] + temp_adder.coef[i];
		}
	}
	else {
		for (int i = 0; i < Res.coef.size(); i++) {
			Res.coef[i] = P2.coef[i] + temp_adder.coef[i];
		}
	}

	return Res;
}

Polynomial operator-(Polynomial P1, Polynomial P2) {
	Polynomial Res, temp_adder;
	int temp = abs(P1.deg - P2.deg);

	if (P1.deg > P2.deg) {
		temp_adder.coef.resize(P1.coef.size());
		for (int i = 0; i < P2.deg; i++) {
			int a = i + temp;
			temp_adder.coef[a] = P2.coef[i];
		}
		Res.deg = P1.coef.size();
	}
	else {
		temp_adder.coef.resize(P2.coef.size());
		for (int i = 0; i < P1.deg; i++) {
			int a = i + temp;
			temp_adder.coef[a] = P1.coef[i];
		}
		Res.deg = P2.coef.size();
	}
	Res.coef.resize(P1.coef.size());

	if (P1.deg > P2.deg) {
		for (int i = 0; i < Res.coef.size(); i++) {
			Res.coef[i] = P1.coef[i] - temp_adder.coef[i];
		}
	}
	else {
		for (int i = 0; i < Res.coef.size(); i++) {
			Res.coef[i] = -P2.coef[i] + temp_adder.coef[i];
		}
	}

	return Res;
}

Polynomial operator*(Polynomial P1, Polynomial P2) {
	Polynomial P3;
	P3.deg = P1.deg + P2.deg - 1;
	P3.coef.resize(P3.deg);

	for (int i = 0; i < P1.coef.size(); i++) {
		for (int j = 0; j < P2.coef.size(); j++) {
			int a = i + j;
			P3.coef[a] += P1.coef[i] * P2.coef[j];
		}
	}

	return P3;
}


Polynomial operator/(Polynomial P1, Polynomial P2) {
	Polynomial divisor, dividend, quotient, remainder;
	if (P1.deg < P2.deg) {
		quotient.coef.resize(1);
		return quotient;
	}

	divisor = P1; dividend = P2;
	int s = P1.deg - P2.deg + 1;
	quotient.deg = s;
	quotient.coef.resize(s);
	int i = 0;

	while (i < P1.deg - P2.deg + 1) {
		quotient.coef[i] = (divisor.coef[i] / dividend.coef[0]);
		remainder = quotient * dividend;
		divisor = divisor - remainder;
		i++;
	}

	return quotient;
}


Polynomial operator%(Polynomial P1, Polynomial P2) {
	Polynomial quotient = P1 / P2;
	Polynomial remainder;
	if (P1.deg < P2.deg) {
		remainder.coef.resize(1);
		return remainder;
	}
	else remainder = P1 - quotient * P2;
	return remainder;
}

istream& operator>>(istream& is, Polynomial& P) {
	cout << "\nNhap bac n cua phuong trinh: "; is >> P.deg;
	P.deg++;
	P.coef.resize(P.deg);

	double temp;
	cout << "\nNhap cac he so cua phuong trinh tu bac n den 0:\n";
	for (int i = 0; i < P.coef.size(); i++) {
		cout << "Bac " << P.deg - i - 1 << ": ";
		is >> temp;
		P.coef[i] = temp;
	}

	return is;
}

ostream& operator<<(ostream& os, Polynomial P) {
	for (int i = 0; i < P.coef.size(); i++) {
		if (P.coef[i] != 0) {
			os << (P.coef[i] > 0 ? " + " : " - ") << abs(P.coef[i]) << "x^" << P.deg - i - 1;
		}
	}

	return os;
}