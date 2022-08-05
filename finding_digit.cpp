// problem link: https://www.hackerrank.com/challenges/find-digits

#include <bits/stdc++.h>
using namespace std;

int find_digit(int n)
{

    int tmp = n;
    int cnt = 0;
    while (n > 0)
    {

        int last_digit = n % 10;
        if (last_digit == 0)
        {
            n /= 10;
            continue;
        }
        if (tmp % last_digit == 0)
        {
            cnt++;
        }
        n /= 10;
    }
    return cnt;
}

int main()
{

    int n;
    cin >> n;
    cout << find_digit(n) << endl;

    return 0;
}