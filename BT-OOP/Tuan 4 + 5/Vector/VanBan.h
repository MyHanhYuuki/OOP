#pragma once
#include <vector>
#include <string>
#include <fstream>
using namespace std;

class VanBan
{
private:
	string s;
	vector<vector<string>> tu;
public:
	vector<string> mostAppears;
	VanBan(string);
	int DemSoCau();
	vector<int> DemSoTu();
	void TimTuXuatHienNhieuNhat();
	void Sort();
	vector<vector<string>> Get();
};
