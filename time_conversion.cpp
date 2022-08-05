#include <iostream>
using namespace std;
#include <string>
// problem link:https://www.hackerrank.com/challenges/time-conversion
string time_conversion(string s)
{
    string str;
    str += s[s.size() - 2];
    str += s[s.size() - 1];
    string str1;
    str1 += s[0];
    str1 += s[1];
    int hour = stoi(str1);
    if (str == "AM" && hour >= 12)
    {
        hour = (hour + 12) % 24;
        string st = to_string(hour);
        string tmp = st;
        if (st.size() == 1)
        {
            st[0] = '0';
            st = st + tmp;
        }
        s[0] = st[0];
        s[1] = st[1];
        // cout << s << endl;
    }

    if (str == "PM" && hour < 12)
    {
        hour = (hour + 12) % 24;
        string st = to_string(hour);

        s[0] = st[0];
        s[1] = st[1];
    }
    s.erase(s.size() - 1);
    s.erase(s.size() - 1);
    return s;
}

int main()
{
    string str = "07:05:45pm";

    cout << time_conversion(str) << endl;

    return 0;
}