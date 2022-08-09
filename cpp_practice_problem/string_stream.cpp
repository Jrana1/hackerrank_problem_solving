#include <sstream>
#include <vector>
#include <iostream>
using namespace std;
// problem link: https://www.hackerrank.com/challenges/c-tutorial-stringstream
vector<int> parseInts(string str)
{
    // Complete this function
    int num;
    char ch;
    stringstream ss(str);
    vector<int> vec;
    while (ss >> num)
    {
        vec.push_back(num);
        ss >> ch;
    }
    return vec;
}

int main()
{
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for (int i = 0; i < integers.size(); i++)
    {
        cout << integers[i] << "\n";
    }

    return 0;
}
