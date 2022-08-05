/// problem link: https://www.hackerrank.com/challenges/the-birthday-bar

#include <bits/stdc++.h>
using namespace std;

int sub_array_div(vector<int> &nums, int m, int d)
{
    int cnt = 0;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        if (i < n - m + 1)
        {
            int sum = 0;
            for (int j = i; j < m + i; j++)
            {
                sum += nums[j];
            }
            // cout << endl;
            if (sum == d)
            {
                cnt++;
            }
        }
    }
    return cnt;
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums;
    while (n--)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    int m, d;
    cin >> m >> d;
    cout << sub_array_div(nums, m, d) << endl;

    return 0;
}