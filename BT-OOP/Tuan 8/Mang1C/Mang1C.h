#pragma once
class Mang1C
{
private:
	int n;
	int* a;

public:
	Mang1C();
	Mang1C(int);
	Mang1C(Mang1C&);
	~Mang1C();
	void input();
	void display();
	bool isPrime(int);
	int primeCount();
	int squareNumberCount();
	bool isPerfectNumber(int);
	long long perfectNumberSum();
	bool isSymmetricNumber(int);
	double symmetricNumberAverage();
	bool isAllOdd();
	void lowestEven();
	void increasing();
	void decreasing();
	void removeAt(int);
	void addAt(Mang1C&, int, int);
	void find(int);
};

