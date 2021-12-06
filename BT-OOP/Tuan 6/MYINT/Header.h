#ifndef MI
#define MI

#include <iostream>
using namespace std;

class So {
private:
	int x;
public:
	So(int);
	friend So operator+(So const&, So const&);
	friend So operator-(So const&, So const&);
	friend ostream& operator<<(ostream& os, const So&);
	friend istream& operator>>(istream& is, So& a);

};


#endif // !1

