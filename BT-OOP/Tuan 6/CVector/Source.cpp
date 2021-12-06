#include <iostream> 
#include "Header.h"

using namespace std;

int main() {
	CVector VT1, VT2;
	cout << "Moi nhap vector thu nhat: " << endl;
	cin >> VT1;
	cout << "Moi nhap vector thu hai: " << endl;
	cin >> VT2;
	cout << "Vector thu nhat: " << VT1 << endl;
	cout << "Vector thu hai: " << VT2 << endl;
	cout << "Ket qua cong 2 vecto: " << VT1 + VT2 << endl;
	cout << "Ket qua tru 2 vecto: " << VT1 + VT2 << endl;
	cout << "Ket qua nhan 2 vecto: " << VT1 * VT2 << endl;
	return 0;
} 