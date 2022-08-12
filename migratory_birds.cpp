// problem link: https://www.hackerrank.com/challenges/migratory-birds
#include <bits/stdc++.h>
using namespace std;

int migratoryBirds(vector<int> &nums)
{

    map<int, int> mp;
    for (int i = 0; i < nums.size(); i++)
    {
        mp[nums[i]]++;
    }
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
}

int main()
{

    vector<int> nums = {1, 2, 3, 4, 5, 4, 3, 2, 1, 3, 4};

    cout << migratoryBirds(nums);

    return 0;
}