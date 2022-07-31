#include <iostream>
#include <vector>
using namespace std;

// problem link:https://www.hackerrank.com/challenges/grading/problem
vector<int> grading_student(vector<int> marks)
{

    for (int i = 0; i < marks.size(); i++)
    {
        int x = marks[i];
        while (1)
        {
            if (x % 5 == 0)
            {
                break;
            }
            x++;
        }
        if ((x - marks[i]) < 3 && marks[i] >= 38)
        {
            marks[i] = x;
        }
        // cout << marks.at(i) << endl;
    }
    return marks;
}

int main()
{

    vector<int> marks{73, 67, 38, 33};
    marks = grading_student(marks);
    for (int i = 0; i < marks.size(); i++)
    {
        cout << marks.at(i) << endl;
    }
}