#define _CRT_SECURE_NO_WARNINGS
#include"CString.h"
cs::cs(char* b)
{
	size = strlen(b);
	a = new char[size + 1];
	strcpy(a, b);
}
//Copy Constructor
cs::cs(const cs& obj)
{
	size = obj.size;
	a = new char[size + 1];
	strcpy(a, obj.a);
}
istream& operator>>(istream& is, cs& b)
{
	b.a = new char[256];
	int i = 0;
	{
		cout << "Hay nhap chuoi cua ban: " << endl;
		is.getline(b.a, 99);
	}
	while (strlen(b.a) > 22)
	{
		cout << "Ban da nhap so luong ky tu ma chuong trinh co the su ly (22 ky tu), moi ban nhap lai:" << endl;
		is.getline(b.a, 99);
	}
	return is;
}
ostream& operator<<(ostream& os, const cs b)
{
	for (int i = 0; i < (int)strlen(b.a); i++)
		os << b.a[i];
	os << endl;
	return os;
}
cs cs::operator+(cs b)
{
	return(strcat(a, b.a));
}
cs cs::operator= (cs& b)
{
	char* a;
	a = b.a;
	return(a);
}
bool cs::operator== (cs b)
{
	if (*a == *b.a)
		return true;
	else
		return false;
}
bool cs::operator< (cs b)
{
	if (*a < *b.a)
	{
		return true;
	}
	else return false;
}
bool cs::operator> (cs b)
{
	if (*a > *b.a)
	{
		return true;
	}
	else return false;
}
bool cs::operator>= (cs b)
{
	if (*a >= *b.a)
	{
		return true;
	}
	else return false;
}
bool cs::operator<= (cs b)
{
	if (*a <= *b.a)
	{
		return true;
	}
	else return false;
}
cs::~cs()
{
	delete[] a;
	a = NULL;
}