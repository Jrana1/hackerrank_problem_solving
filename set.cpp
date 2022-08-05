#include <bits/stdc++.h>
using namespace std;

/// brute force approach
// time -> O(n^3) space -> O(1)
int maxSubarray(int *a, int len)
{
    if (len == 1)
        return a[0];
    int sum = INT_MIN;
    int curr_sum;
    for (int i = 0; i < len; i++)
    {

        for (int j = i; j < len; j++)
        {
            curr_sum = 0;
            for (int k = i; k <= j; k++)
            {
                curr_sum = curr_sum + a[k];
            }
            if (curr_sum > sum)
            {
                sum = curr_sum;
            }
        }
    }
    return sum;
}

// better approach using prfix sum time-> O(n^2) space ->O(n)

int func(int *a, int len)
{

    int pre_sum[len + 1] = {0};
    // pre_sum[0] = 0;

    for (int i = 1; i <= len; i++)
    {
        pre_sum[i] = pre_sum[i - 1] + a[i - 1];
    }
    int maxSum = INT_MIN;
    for (int i = 1; i < len + 1; i++)
    {
        int sum = 0;
        for (int j = 0; j < i; j++)
        {
            sum = pre_sum[i] - pre_sum[j];
            maxSum = max(sum, maxSum);
        }
    }
    return maxSum;
}

// most appropriate approache using kadanes Algo in O(n) time and O(1) space

int func2(int *a, int len)
{

    int max_sum = INT_MIN;
    int sum = 0;
    for (int i = 0; i < len; i++)
    {
        sum = sum + a[i];
        max_sum = max(sum, max_sum);
        if (sum < 0)
        {
            sum = 0;
        }
    }
    return max_sum;
}

// another aproache to handle all negative elements

int func3(int *a, int len)
{

    int max_sum = a[0];
    int sum = a[0];
    for (int i = 1; i < len; i++)
    {
        sum = max(a[i], sum + a[i]);
        max_sum = max(sum, max_sum);
    }
    return max_sum;
}
int main()
{

    int A[] = {-2, -1};
    // cout << maxSubarray(A, sizeof(A) / sizeof(int)) << endl;
    cout << func3(A, sizeof(A) / sizeof(int)) << endl;
    return 0;
}