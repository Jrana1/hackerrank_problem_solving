// https://www.hackerrank.com/challenges/deque-stl

#include <bits/stdc++.h>
using namespace std;
/// print max element in every subarray of len k
// brute force solution in O(n*k) time
void printKMax(vector<int> &vec, int k)
{

    //   int max = vec[0];
    for (int i = 0; i < vec.size(); i++)
    {

        if (i < vec.size() - k + 1)
        {
            int mx = vec[i];
            for (int j = i; j < k + i; j++)
            {
                mx = max(mx, vec[j]);
            }
            cout << mx << " ";
        }
    }
}

void myFun(vector<int> &vec, int k)
{
    deque<int> dq(k);
    int i;
    for (i = 0; i < k; i++)
    {

        while (!dq.empty() && vec[i] >= vec[dq.back()])
        {
            dq.pop_back();
        }
        dq.push_back(i);
    }

    for (; i < vec.size(); i++)
    {

        cout << vec[dq.front()] << endl;
        while (!dq.empty() && dq.front() <= i - k)
        {
            dq.pop_front();
        }
        while (!dq.empty() && vec[i] >= vec[dq.back()])
        {
            dq.pop_back();
        }
        dq.push_back(i);
    }
    cout << vec[dq.front()] << endl;
}

void myfun(vector<int> &vec, int k)
{

    deque<int> dq;
    int i;
    for (i = 0; i < k; i++)
    {

        while (!dq.empty() && vec[i] >= vec[dq.back()])
        {
            dq.pop_back();
        }
        dq.push_back(i);
    }
    for (; i < vec.size(); i++)
    {
        cout << vec[dq.front()] << " ";
        while (!dq.empty() && dq.front() <= i - k)
        {
            dq.pop_front();
        }
        while (!dq.empty() && vec[i] >= vec[dq.back()])
        {
            dq.pop_back();
        }
        dq.push_back(i);
    }
    cout << vec[dq.front()] << endl;
}

int main()
{
    vector<int> vec = {9, 8, 3, 2, 7, 11, 1};
    // printKMax(vec, 4);
    myfun(vec, 2);

    return 0;
}