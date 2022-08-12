/// problem link: https://www.hackerrank.com/challenges/overload-operators

#include <bits/stdc++.h>
using namespace std;

class Complex
{
private:
    int a, b;

public:
    void input(string s)
    {

        int v1 = 0;
        int i = 0;
        while (s[i] != '+' && s[i] != '-')
        {
            v1 = v1 * 10 + s[i] - '0';
            i++;
        }

        char sign = s[i++];
        i++;
        int v2 = 0;
        while (s[i] != '\0')
        {
            v2 = v2 * 10 + s[i] - '0';
            i++;
        }
        this->a = v1;
        this->b = sign == '+' ? v2 : (-1) * v2;
    }
    void display()
    {

        cout << a << (b > 0 ? '+' : '-') << "i" << abs(b) << endl;
    }
    Complex operator+(const Complex &c)
    {
        Complex c1;
        c1.a = this->a + c.a;
        c1.b = this->b + c.b;
        return c1;
    }
    friend ostream &operator<<(ostream &ouput, const Complex &);
};

ostream &operator<<(ostream &output, const Complex &c)
{
    cout << c.a << (c.b > 0 ? '+' : '-') << "i" << abs(c.b) << endl;
    return output;
}

int main()
{
    Complex c1, c2, c3;
    string str;
    cin >> str;
    c1.input(str);
    cin >> str;
    c2.input(str);
    c1.display();
    c2.display();
    c3 = c1 + c2;
    cout << c3 << endl;

    return 0;
}