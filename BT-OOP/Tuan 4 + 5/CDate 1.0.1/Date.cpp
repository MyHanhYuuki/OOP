#include "Date.h"
#include <iostream>
using namespace std;

bool Date::CheckDate()
{
	if (d <= 0 || m <= 0) return false;
	if (m == 2)
	{
		if (!((y % 4 == 0 && y % 100 != 0) || y % 400 == 0))
			if (d >= 29) return false;
	}
	else if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
	{
		if (d > 31) return false;
	}
	else if (m == 4 || m == 6 || m == 9 || m == 11)
	{
		if (d > 30) return false;
	}
	else
	{
		return false;
	}
	return true;
}

void Date::ChangeMonthtoDay()
{
	all = d;
	int mon = m-1;
	while (mon >= 1)
	{
		if (mon == 1 || mon == 3 || mon == 5 || mon == 7 || mon == 8 || mon == 10)
		{
			all += 31;
			mon--;
		}
		else if (mon == 4 || mon == 6 || mon == 9 || mon == 11)
		{
			all += 30;
			mon--;
		}
		else if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
		{
			all += 29;
			mon--;
		}
		else
		{
			all += 28;
			mon--;
		}
	}
}

void Date::Update()
{
	while (all >= 365)
	{
		if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
		{
			y++;
			all -= 366;
		}
		else
		{
			y++;
			all -= 365;
		}
	}
	while (all <= 0)
	{
		y--;
		if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
		{
			all += 366;
		}
		else all += 365;
	}
	if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
	{
		if (all <= 31)
		{
			d = all;
			m = 1;
		}
		else if (all <= 60)
		{
			d = all - 31;
			m = 2;
		}
		else if (all <= 91)
		{
			d = all - 60;
			m = 3;
		}
		else if (all <= 121)
		{
			d = all - 91;
			m = 4;
		}
		else if (all <= 152)
		{
			d = all - 121;
			m = 5;
		}
		else if (all <= 182)
		{
			d = all - 152;
			m = 6;
		}
		else if (all <= 213)
		{
			d = all - 182;
			m = 7;
		}
		else if (all <= 244)
		{
			d = all - 213;
			m = 8;
		}
		else if (all <= 274)
		{
			d = all - 244;
			m = 9;
		}
		else if (all <= 305)
		{
			d = all - 274;
			m = 10;
		}
		else if (all <= 335)
		{
			d = all - 305;
			m = 11;
		}
		else
		{
			d = all - 335;
			m = 12;
		}
	}
	else
	{
		if (all <= 31)
		{
			d = all;
			m = 1;
		}
		else if (all <= 59)
		{
			d = all - 31;
			m = 2;
		}
		else if (all <= 90)
		{
			d = all - 59;
			m = 3;
		}
		else if (all <= 120)
		{
			d = all - 90;
			m = 4;
		}
		else if (all <= 151)
		{
			d = all - 120;
			m = 5;
		}
		else if (all <= 181)
		{
			d = all - 151;
			m = 6;
		}
		else if (all <= 212)
		{
			d = all - 181;
			m = 7;
		}
		else if (all <= 243)
		{
			d = all - 212;
			m = 8;
		}
		else if (all <= 273)
		{
			d = all - 243;
			m = 9;
		}
		else if (all <= 304)
		{
			d = all - 273;
			m = 10;
		}
		else if (all <= 334)
		{
			d = all - 304;
			m = 11;
		}
		else
		{
			d = all - 334;
			m = 12;
		}
	}
}

void Date::Input()
{
	do
	{
		cout << "Nhap ngay: ";
		cin >> d;
		cout << "Nhap thang: ";
		cin >> m;
		cout << "Nhap nam: ";
		cin >> y;
	} while (CheckDate() == false);
}

void Date::Output()
{
	cout << d << "/" << m << "/" << y;
}

Date Date::Cong(int d)
{
	ChangeMonthtoDay();
	all += d;
	Update();
	return *this;
}

Date Date::Tru(int d)
{
	ChangeMonthtoDay();
	all -= d;
	Update();
	return *this;
}

void Date::Cong1Ngay()
{
	ChangeMonthtoDay();
	all++;
	Update();
}

void Date::Tru1Ngay()
{
	ChangeMonthtoDay();
	all--;
	Update();
}

int Date::KhoangCachGiuaHaiNgay(Date t)
{
	ChangeMonthtoDay();
	t.ChangeMonthtoDay();
	int disyearmin, disyearmax, disday;
	if (y == t.y)
	{
		disday = abs(t.all - all);
		return disday;
	}
	if (y < t.y)
	{
		disyearmin = y;
		disyearmax = t.y;
		disday = -all + t.all;
	}
	else
	{
		disyearmin = t.y;
		disyearmax = y;
		disday = all - t.all;
	}
	while (disyearmin != disyearmax)
	{
		if ((disyearmin % 4 == 0 && disyearmin % 100 != 0) || disyearmin % 400 == 0)
		{
			disday += 366;
		}
		else disday += 365;
		disyearmin++;
	}
	return disday;
}




