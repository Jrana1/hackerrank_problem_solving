#include <iostream>
using namespace std;
#include <vector>
// problem link: https://www.hackerrank.com/challenges/diagonal-difference/problem
int d_d(vector<vector<int>> mat)
{
    int sum1 = 0;
    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = 0; j < mat.size(); j++)
        {
            if (i == j)
            {
                sum1 += mat[i][j];
            }
        }
    }
    // cout << sum1 << endl;

    int sum2 = 0;
    for (int i = 0; i < mat.size(); i++)
    {
        int j;
        for (j = 0; j < mat.size() - i; j++)
        {
        }
        sum2 += mat[i][j - 1];
    }
    // cout << sum2 << endl;
    return abs(sum1 - sum2);
}

int main()
{
    vector<vector<int>> mat = {
        {1, 2},
        {4, 5}};
    cout << d_d(mat) << endl;

    return 0;
}
