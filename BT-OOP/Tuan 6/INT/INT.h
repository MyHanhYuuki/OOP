#ifndef INT_H_INCLUDED
#define INT_H_INCLUDED

#include <iostream>

using namespace std;

class INTEGER
{
    private:
        float x;
    public:
        INTEGER (float X = 0)
        {
            x = X;
        }
        friend ostream & operator << (ostream &out, const INTEGER &s);
        friend istream & operator >> (istream &in, INTEGER &s);
        INTEGER operator + (INTEGER &s)
        {
            INTEGER tong;
            tong.x = this->x + s.x;
            return tong;
        }

        INTEGER operator - (INTEGER &s)
        {
            INTEGER tru(this->x - s.x);
            return tru;
        }

        INTEGER operator * (INTEGER &s)
        {
            INTEGER nhan(this->x * s.x);
            return nhan;
        }

        INTEGER operator / (INTEGER &s)
        {
            INTEGER chia(this->x / s.x);
            return chia;
        }

        INTEGER operator ++ ()
        {
            INTEGER temp;
            temp.x = ++x;
            return temp;
        }

        INTEGER operator ++(int)
        {
            INTEGER temp;
            temp.x = x++;
            return temp;
        }

        INTEGER operator -- ()
        {
            INTEGER temp;
            temp.x = --x;
            return temp;
        }

        INTEGER operator --(int)
        {
            INTEGER temp;
            temp.x = x--;
            return temp;
        }

        bool operator == (INTEGER &s)
        {
            if (this->x == s.x)
                return true;
            return false;
        }

        bool operator != (INTEGER &s)
        {
            if (this->x != s.x)
                return true;
            return false;
        }

        bool operator > (INTEGER &s)
        {
            if (this->x > s.x)
                return true;
            return false;
        }

        bool operator < (INTEGER &s)
        {
            if (this->x < s.x)
                return true;
            return false;
        }

        bool operator >= (INTEGER &s)
        {
            if (this->x >= s.x)
                return true;
            return false;
        }

        bool operator <= (INTEGER &s)
        {
            if (this->x <= s.x)
                return true;
            return false;
        }
};

ostream & operator << (ostream &out, const INTEGER &s)
{
    out << "x: ";
    out << s.x << endl;
    return out;
}

istream & operator >> (istream &in, INTEGER &s)
{
    cout << "Nhap so: ";
    in >> s.x;
    return in;
}


#endif // INT_H_INCLUDED
