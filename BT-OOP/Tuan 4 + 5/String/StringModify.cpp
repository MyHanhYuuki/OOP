#define _CRT_SECURE_NO_WARNINGS
#include"StringModify.h"
//Constructor
String::String(char *b)
{
	size = strlen(b);
	a = new char[size +1];
	strcpy(a, b);
}

void String::InputString()
{
	a = new char[256] ;
	
	{
		cout << "Hay nhap chuoi cua ban: " << endl;
		cin.getline(a,99);
	}
	
}

void String::OutputString()
{
	cout << "Chuoi cua ban la: " << endl;
	for (int i = 0; i < strlen(a); i++)
		cout << a[i];
	cout << endl;
}

void String::LengthOfString()
{
	cout << "Chuoi co do dai la: " << strlen(a) << endl;
}

void String::ReverseString()
{
	cout << "Chuoi cua ban sau khi duoc dao la: " << _strrev(a) << endl;
}

void String::ConcatenateStrings(String &s)
{
	cout << "Hai chuoi sau khi duoc noi la: " << endl;
	cout << strcat(a, s.a);
}

String::~String()
{
	delete[] a;
	a = NULL;
	size = 0;
}
