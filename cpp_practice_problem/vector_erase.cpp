// problem link: https://www.hackerrank.com/challenges/vector-erase

#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> vec = {1, 4, 6, 2, 8, 9};
    int i;
    cin >> i;
    vec.erase(vec.begin() + i - 1);
    int j, k;
    cin >> j >> k;
    vec.erase(vec.begin() + j - 1, vec.begin() + k - 1);
    for (auto x : vec)
    {
        cout << x << " ";
    }

    return 0;
}