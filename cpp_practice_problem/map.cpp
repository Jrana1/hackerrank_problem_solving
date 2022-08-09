#include <bits/stdc++.h>
using namespace std;

int main()
{
    multimap<string, int> mp;
    int q;
    cin >> q;
    int mark;
    string name;
    while (q--)
    {

        int cs;
        cin >> cs;
        switch (cs)
        {
        case 1:
            cin >> name >> mark;
            if (mp.count(name) == 0)
            {
                mp.insert(make_pair(name, mark));
            }
            else
            {
                mp.find(name)->second += mark;
            }
            break;
        case 2:
            cin >> name;
            mp.erase(name);
            break;
        case 3:
            cin >> name;
            if (mp.count(name) == 0)
            {
                cout << 0 << endl;
            }
            else
            {
                cout << mp.find(name)->second << endl;
            }
            break;
        default:
            break;
        }
    }

    return 0;
}