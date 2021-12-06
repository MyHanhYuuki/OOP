#include <iostream>
#include "CTimeSpan.h"
using namespace std;

int main()
{
    CTimeSpan T1, T2;
    int n;
    
    cout << "T1 : "; cin >> T1;
    cout << "T2 : "; cin >> T2;

    cout << "\nT1 = " << T1;
    cout << "\nT2 = " << T2 << "\n";

    do {
        cout << "\n1: = ";
        cout << "\n2: != ";
        cout << "\n3: > ";
        cout << "\n4: >= ";
        cout << "\n5: < ";
        cout << "\n6: <= ";
        cout << "\n7: T1 + T2";
        cout << "\n8: T1 - T2";
        cout << "\n0: Quit\n";
        cin >> n;

        switch (n) {
        case 1:
            if (T1 == T2) cout << "\ntrue\n";
            else cout << "\nfalse\n";
            break;
        case 2:
            if (T1 != T2) cout << "\ntrue\n";
            else cout << "\nfalse\n";
            break;
        case 3:
            if (T1 > T2) cout << "\ntrue\n";
            else cout << "\nfalse\n";
            break;
        case 4:
            if (T1 >= T2) cout << "\ntrue\n";
            else cout << "\nfalse\n";
            break;
        case 5:
            if (T1 < T2) cout << "\ntrue\n";
            else cout << "\nfalse\n";
            break;
        case 6:
            if (T1 <= T2) cout << "\ntrue\n";
            else cout << "\nfalse\n";
            break;
        case 7:
            cout << "\n" << T1 << " + " << T2 << " = " << T1 + T2 << "\n";
            break;
        case 8:
            cout << "\n" << T1 << " - " << T2 << " = " << T1 - T2 << "\n";
            break;
        case 0:
            return 0;
        default:
            cout << "\nInvalid\n";
            break;
        }
    } while (n != 0);

    return 0;
}