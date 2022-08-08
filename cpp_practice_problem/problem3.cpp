/// problem link: https://www.hackerrank.com/challenges/c-tutorial-conditional-if-else

#include <bits/stdc++.h>
using namespace std;

int main()
{

    string str;
    getline(cin, str);
    int n = stoi(str);
    string nums[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    if (n >= 1 && n <= 9)
    {
        cout << nums[n] << endl;
    }
    else
    {
        cout << "Greater than 9" << endl;
    }

    return 0;
}