#include "Khongchinhmain.h"
ostream& operator<<(ostream& os, const char* str) {
    os << (string)"Entering the Hello program saying..." << endl;
    for (int i = 0; i < strlen(str); i++) {
        os << str[i];
    }
    os << (string)"Then exiting...";
    return os;
}
    