#include "Complex.h"
#include <iostream>
using namespace std;

Complex::Complex() {
	this->real = this->img = 0;
}

Complex::Complex(double real, double img) {
	this->real = real;
	this->img = img;
}

Complex operator+(Complex C1, Complex C2) {
	Complex C3(C1.real + C2.real, C1.img + C2.img);
	return C3;
}

Complex operator-(Complex C1, Complex C2) {
	Complex C3(C1.real - C2.real, C1.img - C2.img);
	return C3;
}

Complex operator*(Complex C1, Complex C2) {
	Complex C3(C1.real * C2.real - C1.img * C2.img, C1.real * C2.img + C2.real * C1.img);
	return C3;
}

Complex operator/(Complex C1, Complex C2) {
	Complex C3((C1.real * C2.real + C1.img * C2.img) / (C2.real * C2.real + C2.img * C2.img), (C2.real * C1.img - C1.real * C2.img) / (C2.real * C2.real + C2.img * C2.img));
	return C3;
}

istream& operator>>(istream& is, Complex& C) {
	cout << "\nThuc: "; is >> C.real;
	cout << "Ao: "; is >> C.img;
	return is;
}

ostream& operator<<(ostream& os, Complex C) {
	if (C.real == 0 && C.img == 0) cout << 0;
	else {
		if (C.real != 0) os << C.real;
		if (C.img != 0) os << (C.img > 0 ? " + " : " - ") << abs(C.img) << "i";
	}
	return os;
}
