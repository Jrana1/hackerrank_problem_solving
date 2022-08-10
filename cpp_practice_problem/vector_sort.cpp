// problem link: https://www.hackerrank.com/challenges/vector-sort
#include <bits/stdc++.h>
using namespace std;
bool cmp(int a, int b)
{
    if (a > b)
        return true;
    return false;
}
int main()
{

    vector<int> vec = {9, 2, 1, 0, 20};
    sort(vec.begin(), vec.end(), cmp);

    for (auto x : vec)
    {
        cout << x << " ";
    }

    return 0;
}