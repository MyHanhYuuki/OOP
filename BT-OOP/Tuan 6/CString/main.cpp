#include "CString.h"

int main()
{
	char a[256] = ("Hello World");
	cs s1(a);
	cs s2(a);
	cout << "Chuoi 1: " << endl;
	cin >> s1;
	cout << "Chuoi 2: " << endl;
	cin >> s2;
	cout << "Chuoi 1 == chuoi 2? ";
	if (s1 == s2)
		cout << "True" << endl;
	else
		cout << "False" << endl;
	cout << "Chuoi 1 >= chuoi 2? ";
	if (s1 >= s2)
		cout << "True" << endl;
	else
		cout << "False" << endl;
	cout << "Chuoi 1 <= chuoi 2? ";
	if (s1 <= s2)
		cout << "True" << endl;
	else
		cout << "False" << endl;
	cout << "Chuoi 1 < chuoi 2? ";
	if (s1 < s2)
		cout << "True" << endl;
	else
		cout << "False" << endl;

	cout << "Chuoi 1 > chuoi 2? ";
	if (s1 > s2)
		cout << "True" << endl;
	else
		cout << "False" << endl;
	s1 = s2;
	cout << "Gan chuoi 1 vao chuoi 2: " << endl;
	cout << s1<<endl;
	cout << "Hai chuoi sau khi cong: " << endl;
	cout << (s1 + s2);
	return 0;
}
