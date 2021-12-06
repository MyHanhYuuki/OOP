#include <iostream>
#include "TestCandidate.h"
using namespace std;

int main()
{
	TestCandidate tc;
	
	cout << "Nhap danh sach cac thi sinh:\n";
	tc.getInfoAndDisplay();

	return 0;
}