#include <iostream>
#include "CTimeSpan.h"
using namespace std;

int main()
{
    CTimeSpan T1, T2, T3;
    int n;

    cout << "Nhap thoi gian T1 : "; T1.input(T1);
    cout << "Nhap thoi gian T2 : "; T2.input(T2);

    cout << "\nT1 = "; T1.display(T1);
    cout << "\nT2 = "; T2.display(T2);
    cout << "\n";

    do {
        cout << "\n1: T1 = T2 ?";
        cout << "\n2: T1 != T2 ?";
        cout << "\n3: T1 > T2 ?";
        cout << "\n4: T1 >= T2 ?";
        cout << "\n5: T1 < T2 ?";
        cout << "\n6: T1 <= T2 ?";
        cout << "\n7: T1 + T2";
        cout << "\n8: T1 - T2";
        cout << "\n0: Thoat chuong trinh\n";
        cin >> n;

        switch (n) {
        case 1:
            if ((T1, T2).equal(T1, T2)) cout << "\ntrue\n";
            else cout << "\nfalse\n";
            break;
        case 2:
            if ((T1, T2).notEqual(T1, T2)) cout << "\ntrue\n";
            else cout << "\nfalse\n";
            break;
        case 3:
            if ((T1, T2).biggerThan(T1, T2)) cout << "\ntrue\n";
            else cout << "\nfalse\n";
            break;
        case 4:
            if ((T1, T2).biggerThanOrEqual(T1, T2)) cout << "\ntrue\n";
            else cout << "\nfalse\n";
            break;
        case 5:
            if ((T1, T2).lessThan(T1, T2)) cout << "\ntrue\n";
            else cout << "\nfalse\n";
            break;
        case 6:
            if ((T1, T2).lessThanOrEqual(T1, T2)) cout << "\ntrue\n";
            else cout << "\nfalse\n";
            break;
        case 7:
            cout << "\n"; T1.display(T1);
            cout << " + ";
            T2.display(T2);
            cout << " = ";
            T3 = (T1, T2).add(T1, T2);
            T3.display(T3);
            cout << "\n";
            break;
        case 8:
            cout << "\n"; T1.display(T1);
            cout << " - ";
            T2.display(T2);
            cout << " = ";
            T3 = (T1, T2).minus(T1, T2);
            T3.display(T3);
            cout << "\n";
            break;
        case 0:
            return 0;
        default:
            cout << "\nLua chon khong hop le. Moi ban chon lai.\n";
            break;
        }
    } while (n != 0);

    return 0;
}