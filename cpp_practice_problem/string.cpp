// problem link: https://www.hackerrank.com/challenges/c-tutorial-strings

#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Complete the program

    string str1, str2;

    getline(cin, str1);
    getline(cin, str2);
    cout << str1.size() << " " << str2.size() << endl;
    cout << str1 + str2 << endl;
    char tmp = str1[0];
    str1[0] = str2[0];
    str2[0] = tmp;
    cout << str1 << " " << str2 << endl;

    return 0;
}