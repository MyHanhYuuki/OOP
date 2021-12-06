#include "Company.h"
#include <iostream>
using namespace std;

Company::Company() {
	amount = 0;
}

void Company::input() {
	int n;
	do {
		cout << "\nNhap so luong nhan vien: "; cin >> amount;
		if (amount < 0) cout << "\nSo luong khong the be hon 0.\n";
	} while (amount < 0);

	data.resize(amount);
	for (int i = 0; i < amount; i++) {
		cout << "\nNhap thong tin nhan vien thu " << i + 1 << ":\n";
		do {
			cout << "Chon loai nhan vien:\n1: Nhan vien bien che\n2: Nhan vien hop dong.\nLua chon cua ban: "; cin >> n;
			if (n != 1 && n != 2) cout << "\nLua chon khong hop le.\n";
		} while (n != 1 && n != 2);
		switch (n) {
		case 1:
			data[i] = new Regular_Staff;
			break;
		case 2:
			data[i] = new Contract_Staff;
			break;
		}
		data[i]->input();
	}
}

void Company::display() {
	if (data.empty()) cout << "\nChua co thong tin.\n";
	else {
		for (int i = 0; i < amount; i++) {
			cout << "\n" << i + 1 << "/\n";
			data[i]->display();
			cout << "\n";
		}
	}
}

void Company::wcAbove3AndAHalf() {
	if (data.empty()) cout << "\nChua co thong tin.\n";
	else {
		int count = 0, j = 1;
		cout << "\n";
		for (int i = 0; i < amount; i++) {
			if (data[i]->getWC() >= 3.5) {
				cout << "\n" << j + 1 << "/\n";
				j++;
				data[i]->display();
				cout << "\n";
			}
			count++;
		}
		cout << "\n";
		if (count == 0) cout << "Khong co nhan vien nao co he so luong tu 3.5 tro len.\n";
	}
}

int Company::workdayEqual26() {
	int count = 0;
	for (int i = 0; i < amount; i++) {
		if (data[i]->getWD() == 26) count++;
	}
	return count;
	
}

double Company::accountantWage() {
	double w = 0;
	for (int i = 0; i < amount; i++) {
		if (data[i]->getDepartment() == "Ke toan") {
			w += data[i]->wageCal();
		}
	}
	return w;

}

double Company::averageRSWage() {
	double total = 0;
	for (int i = 0; i < amount; i++) {
		total += data[i]->wageCal();
	}
	return total / amount;

}

bool Company::noWorkdayCS() {
	for (int i = 0; i < amount; i++) {
		if (data[i]->getWD() > 0) return false;
	}
	return true;
}

void Company::highestWCRS() {
	if (data.empty()) cout << "\nChua co thong tin.\n";
	else {
		double max = data[0]->getWC();
		for (int i = 1; i < amount; i++) {
			if (data[i]->getWC() > max) max = data[i]->getWC();
		}

		for (int i = 1; i < amount; i++) {
			if (data[i]->getWC() == max) {
				cout << "\n" << i + 1 << "/\n";
				data[i]->display();
			}
		}
	}
}

void Company::IDNumSort() {
	if (data.empty()) cout << "\nChua co thong tin.\n";
	else {
		for (int i = 0; i < amount; i++) {
			for (int j = i + 1; j < amount; j++) {
				if (data[i]->getIDNum() > data[j]->getIDNum()) swap(data[i], data[j]);
			}
		}
		cout << "\nSap xep thanh cong.\n";
	}
}

void Company::findID() {
	if (data.empty()) cout << "\nChua co thong tin.\n";
	else {
		string id;
		cout << "\nNhap ma so: ";
		cin.ignore();  getline(cin, id);
		if (data.empty()) cout << "\nChua co nhan vien.\n";
		else {
			int count = 0, j = 1;
			for (int i = 0; i < amount; i++) {
				if (data[i]->getIDNum() == id) {
					count++;
					cout << "\n" << j + 1 << "/\n";
					j++;
					data[i]->display();
				}
			}
			cout << "\n";
			if (count == 0) cout << "\nKhong tim thay nhan vien nao voi ma so vua nhap.\n";
		}
	}
}

void Company::findName() {
	if (data.empty()) cout << "\nChua co thong tin.\n";
	else {
		string n;
		cout << "\nNhap ten: ";
		cin.ignore();  getline(cin, n);
		if (data.empty()) cout << "\nChua co thong tin.\n";
		else {
			int count = 0, j = 1;
			for (int i = 0; i < amount; i++) {
				if (data[i]->getName() == n) {
					count++;
					cout << "\n" << j + 1 << "/\n";
					data[i]->display();
					j++;
				}
			}
			cout << "\n";
			if (count == 0) cout << "\nKhong tim thay nhan vien nao voi ten vua nhap.\n";
		}
	}
}

void Company::findDepartment() {
	if (data.empty()) cout << "\nChua co thong tin.\n";
	else {
		string d;
		cout << "\nNhap phong ban: ";
		cin.ignore();  getline(cin, d);
		if (data.empty()) cout << "\nChua co nhan vien.\n";
		else {
			int count = 0, j = 1;
			for (int i = 0; i < amount; i++) {
				if (data[i]->getDepartment() == d) {
					count++;
					cout << "\n" << j + 1 << "/\n";
					j++;
					data[i]->display();
				}
			}
			cout << "\n";
			if (count == 0) cout << "\nKhong tim thay nhan vien nao voi phong ban vua nhap.\n";
		}
	}
}

void Company::findWage(float w) {
	if (data.empty()) cout << "\nChua co thong tin.\n";
	else {
		int count = 0, j = 1;
		for (int i = 0; i < amount; i++) {
			if (data[i]->wageCal() == w) {
				count++;
				cout << "\n" << i + 1 << "/\n";
				j++;
				data[i]->display();
			}
		}
		cout << "\n";
		if (count == 0) cout << "\nKhong tim thay nhan vien voi tien luong vua nhap.\n";
	}
}

void Company::addBack() {
	if (data.empty()) cout << "\nChua co thong tin.\n";
	else {
		Staff* S = NULL;
		int n;
		do {
			cout << "\nChon loai nhan vien:\n1: Nhan vien bien che\n2: Nhan vien van phong.\nLua chon cua ban: "; cin >> n;
			if (n != 1 && n != 2) cout << "\nLua chon khong hop le.\n";
		} while (n != 1 && n != 2);
		switch (n) {
		case 1:
			S = new Regular_Staff;
			break;
		case 2:
			S = new Contract_Staff;
			break;
		}
		S->input();
		data.push_back(S);
		amount++;
	}
}

void Company::remove(string id) {
	if (data.empty()) cout << "\nChua co thong tin.\n";
	else {
		int i = 0;
		for (vector<Staff*>::iterator it = data.begin(); it != data.end(); it++) {
			if (data[i]->getIDNum() == id) {
				data.erase(it);
				cout << "\nXoa nhan vien thanh cong.\n";
				amount--;
				return;
			}
			i++;
		}
		cout << "\nKhong tim thay nhan vien nao voi ma so vua nhap.\n";
	}
}