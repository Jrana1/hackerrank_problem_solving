#include <bits/stdc++.h>
using namespace std;
class MyClass
{
private:
    int num;

public:
    MyClass(int a) { num = a; }
    void less(int x)
    {
        if (num < 0)
        {
            throw 13.3;
        }
        cout << "still ok" << endl;
        num -= x;
    }
};

int main()
{
    MyClass c(23);
    try
    {

        c.less(3);
        c.less(10);
        c.less(14);
        c.less(3);
    }
    catch (const char *msg)
    {
        cout << "Exception happend: " << msg << endl;
    }
    catch (int code)
    {
        cout << "Exception happend: " << code << endl;
    }
    catch (...)
    {
        cout << "Exception happend:" << endl;
    }

    return 0;
}