// problem link : https://www.hackerrank.com/challenges/variable-sized-arrays

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<vector<int>> mat;
    while (n--)
    {
        int k;
        cin >> k;
        vector<int> tmp(k);
        for (int i = 0; i < k; i++)
        {
            cin >> tmp[i];
        }
        mat.push_back(tmp);
    }
    while (q--)
    {
        int i, j;
        cin >> i >> j;
        cout << mat[i][j] << endl;
    }
    return 0;
}