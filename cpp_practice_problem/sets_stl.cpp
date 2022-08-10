// https://www.hackerrank.com/challenges/cpp-sets

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;

    set<int> sets;
    cin >> q;
    while (q--)
    {
        int cs, x;
        cin >> cs;
        switch (cs)
        {
        case 1:
            cin >> x;
            sets.insert(x);
            break;
        case 2:
            cin >> x;
            if (sets.find(x) != sets.end())
            {
                sets.erase(x);
            }
            break;
        case 3:

            cin >> x;
            if (sets.find(x) != sets.end())
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
            break;
        default:
            break;
        }
    }

    return 0;
}