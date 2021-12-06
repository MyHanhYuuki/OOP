#pragma once
class Date
{
private:
	int d, m, y;
	int all;
public:
	void Input();
	void Output();
	Date Cong(int );
	Date Tru(int );
	void Cong1Ngay();
	void Tru1Ngay();
	int KhoangCachGiuaHaiNgay(Date);
	bool CheckDate();
	void ChangeMonthtoDay();
	void Update();
};

