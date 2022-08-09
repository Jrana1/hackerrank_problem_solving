/// problem link: https://www.hackerrank.com/challenges/box-it/problem

#include <bits/stdc++.h>
using namespace std;
class Box
{
private:
    int l, b, h;

public:
    Box();              // default constructor
    Box(int, int, int); // standard constructor
    Box(const Box &);   // copy constructor
    // getter methods
    inline int getLength() const { return l; }
    inline int getBreath() const { return b; }
    inline int getHeight() const { return h; }
    long long CalculateVolume();
    bool operator<(const Box &);
    // ostream &operator<<(ostream &);
    friend ostream &operator<<(ostream &, const Box &);
};
Box::Box(const Box &b)
{
    this->b = b.b;
    this->l = b.l;
    this->h = b.h;
}
bool Box::operator<(const Box &b)
{
    if (this->l < b.l)
        return true;
    if (this->b < b.b && this->l == b.l)
        return true;
    if (this->h < b.h && this->b == b.b && this->l == b.l)
        return true;
    return false;
}
Box::Box() : l(0), b(0), h(0) {}
Box::Box(int length, int breath, int height) : l(length), b(breath), h(height) {}
long long Box::CalculateVolume() { return l * b * h; }
ostream &operator<<(ostream &output, const Box &b)
{
    output << b.getLength() << " " << b.getBreath() << " " << b.getHeight();
    return output;
}
int main()
{
    int n;
    cin >> n;
    Box temp;
    for (int i = 0; i < n; i++)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            cout << temp << endl;
        }
        if (type == 2)
        {
            int l, b, h;
            cin >> l >> b >> h;
            Box NewBox(l, b, h);
            temp = NewBox;
            cout << temp << endl;
        }
        if (type == 3)
        {
            int l, b, h;
            cin >> l >> b >> h;
            Box NewBox(l, b, h);
            if (NewBox < temp)
            {
                cout << "Lesser\n";
            }
            else
            {
                cout << "Greater\n";
            }
        }
        if (type == 4)
        {
            cout << temp.CalculateVolume() << endl;
        }
        if (type == 5)
        {
            Box NewBox(temp);
            cout << NewBox << endl;
        }
    }

    return 0;
}