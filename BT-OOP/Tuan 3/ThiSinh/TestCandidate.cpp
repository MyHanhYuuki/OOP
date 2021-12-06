#include "TestCandidate.h"
#include "Candidate.h"
#include <iostream>
using namespace std;

void TestCandidate::getInfoAndDisplay() {
	cout << "\nNhap so luong thi sinh: ";
	cin >> n;
	c = new Candidate[n];

	for (int i = 0; i < n; i++) {
		cout << "\nNhap thong tin thi sinh thu " << i + 1 << ": ";
		cout << "\nMa so: "; c[i].setId();
		cout << "Ho va ten: "; c[i].setName();
		cout << "Ngay, thang, nam sinh: "; c[i].setDOB();
		cout << "Diem Toan: "; c[i].setMath();
		cout << "Diem Van: "; c[i].setLiterature();
		cout << "Diem Anh: "; c[i].setEnglish();
	}

	cout << "\n";

	for (int i = 0; i < n; i++) {
		cout << "\nCac thi sinh co tong diem lon hon 15:\n";
		c[i].higherThan15();
	}
}

TestCandidate::~TestCandidate() {
	n = 0;
	delete[] c;
	c = NULL;
}