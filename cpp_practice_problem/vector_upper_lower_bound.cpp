// www.hackerrank.com/challenges/cpp-lower-bound
#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> vec = {1, 1, 2, 2, 6, 9, 9, 15};
    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        auto it = lower_bound(vec.begin(), vec.end(), x);
        {
            if ((*it) == x)
            {
                cout << "Yes"
                     << " " << it - vec.begin() + 1 << endl;
            }
            else
            {
                cout << "No"
                     << " " << it - vec.begin() + 1 << endl;
            }
        }
    }

    return 0;
}