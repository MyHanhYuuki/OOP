#include <iostream>
#include "INT.h"
using namespace std;

int main()
{
    INTEGER i1, i2, i3, i4;
    cout << "Nhap so thu 1 va thu 2: \n";
    cin >> i1 >> i2;
    cout << i1 << i2;
    cout << "Tong i1 + i2. " << i1 + i2;
    cout << "Hieu i1 - i2. " << i1 - i2;
    cout << "Tich i1 * i2. " << i1 * i2;
    cout << "Thuong i2 / i1. " << i2 / i1;
    i3 = ++i1;
    cout << i3; // ++i
    i4 = --i2;
    cout << i4; // --i
    return 0;
}
