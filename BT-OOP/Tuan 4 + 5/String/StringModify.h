#ifndef SM
#define SM
#include<iostream>

using namespace std;
class String
{
private:
	char *a;
	int size;
public:
	String(char *);
	~String();
	void InputString();
	void OutputString();
	void LengthOfString();
	void ReverseString();
	void ConcatenateStrings(String&);
};
#endif
