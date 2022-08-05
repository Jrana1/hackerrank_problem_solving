#include <bits/stdc++.h>
using namespace std;
string fun(int x1, int v1, int x2, int v2)
{

    if (((x1 < x2) && (v1 < v2)) || ((x2 < x1) && (v2 < v1)))
    {
        return "NO";
    }
    else
    {
        return "YES";
    }
}

int main()
{
    int x1, x2, v1, v2;
    cin >> x1 >> v1 >> x2 >> v2;
    cout << fun(x1, v1, x2, v2);
}