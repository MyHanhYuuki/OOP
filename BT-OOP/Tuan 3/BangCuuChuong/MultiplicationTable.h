#pragma once
#ifndef BCC
#define BCC

class MultiplicationTable
{
private:
	int n, m;
	
public:
	void Set();
	void Get(MultiplicationTable&);
	void MT_n(MultiplicationTable);
	void MT_nm(MultiplicationTable);
	void MT();
};

#endif