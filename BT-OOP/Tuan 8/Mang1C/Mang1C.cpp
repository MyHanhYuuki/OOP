#include <iostream>
#include <math.h>
#include "Mang1C.h"
using namespace std;

Mang1C::Mang1C() {
	n = 0;
	a = NULL;
}

Mang1C::Mang1C(int n) {
	this->n = n;
	a = new int[n];
}

Mang1C::Mang1C(Mang1C& M) {
	n = M.n;
	a = new int[M.n];
	for (int i = 0; i < n; i++) {
		a[i] = M.a[i];
	}
}

Mang1C::~Mang1C() {
	n = 0;
	delete[] a;
	a = NULL;
}

void Mang1C::input() {
	cout << "Nhap so phan tu: ";
	cin >> n;
	a = new int[n];
	for (int i = 0; i < n; i++) {
		cout << "Nhap phan tu thu " << i + 1 << ": ";
		cin >> a[i];
	}
}

void Mang1C::display() {
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}

bool Mang1C::isPrime(int n) {
	if (n <= 1) return false;
	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0) return false;
	return true;
}

int Mang1C::primeCount() {
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (isPrime(a[i])) count++;
	}
	return count;
}

int Mang1C::squareNumberCount() {
	int count = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 1; j < a[i]; j++) {
			if (pow(j, 2) == a[i]) count++;
			break;
		}
	}
	return count;
}

bool Mang1C::isAllOdd() {
	for (int i = 0; i < n; i++) {
		if (!isPrime(a[i])) return false;
	}
	return true;
}

void Mang1C::lowestEven() {
	int e_min = 0, i = 0;

	for (i = 0; i < n; i++) {
		if (a[i] % 2 == 0) {
			e_min = a[i];
			break;
		}
	}
	if (i == n - 1) {
		cout << "khong co phan tu chan";
		return;
	}

	for (i; i < n; i++) {
		if (a[i] % 2 && a[i] < e_min) e_min = a[i];
	}
	cout << e_min;
}

bool Mang1C::isPerfectNumber(int n) {
	int sum = 0;
	for (int i = 1; i <= n / 2; i++) {
		if (n % i == 0) sum += i;
	}
	if (sum == n) return true;
	return false;
}

long long Mang1C::perfectNumberSum() {
	long long sum = 0;
	for (int i = 0; i < n; i++) {
		if (isPerfectNumber(a[i])) sum += a[i];
	}
	return sum;
}

bool Mang1C::isSymmetricNumber(int s1) {
	int s2 = 0, t = s1;
	while (t > 0)
	{
		s2 = s2 * 10 + t % 10;
		t /= 10;
	}
	return s2 == s1;
}

double Mang1C::symmetricNumberAverage(){
	double average = 0;;
	for (int i = 0; i < n; i++) {
		if (isSymmetricNumber(a[i])) average += a[i];
	}
	return average / n;
}

void Mang1C::removeAt(int pos) {
	if (pos > n) {
		cout << "\nVi tri nam ngoai gioi han mang.\n";
		return;
	}

	pos--;
	for (int i = pos; i < n; i++) {
		a[i] = a[i + 1];
	}
	a[n - 1] = NULL;
	n--;

	if (n == 0) cout << "\nMang khong con phan tu.\n";
	else {
		cout << "\nMang sau khi da xoa: ";
		display();
	}
}

void Mang1C::addAt(Mang1C& M1, int t, int pos) {
	if (pos > n) {
		cout << "\nVi tri nam ngoai gioi han mang.\n";
		return;
	}

	Mang1C M2(M1.n + 1);
	pos--;
	for (int i = 0; i < pos; i++) {
		M2.a[i] = M1.a[i];
	}
	M2.a[pos] = t;
	for (int i = pos + 1; i < M2.n; i++) {
		M2.a[i] = M1.a[i - 1];
	}

	cout << "\nMang sau khi da them: "; M2.display();
}

void Mang1C::find(int t) {
	int count = 0;
	cout << "\nVi tri cua phan tu duoc tim: ";
	for (int i = 0; i < n; i++) {
		if (a[i] == t) {
			cout << i + 1 << " ";
			count++;
		}
	}
	if (count == 0) cout << "khong tim thay\n";
}

void Mang1C::increasing() {
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] > a[j]) swap(a[i], a[j]);
		}
	}
}

void Mang1C::decreasing() {
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] < a[j]) swap(a[i], a[j]);
		}
	}
}