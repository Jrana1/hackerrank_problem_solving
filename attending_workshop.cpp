// problem link: https://www.hackerrank.com/challenges/attending-workshops

#include <bits/stdc++.h>
using namespace std;

struct Workshop
{

    int s_time;
    int duration;
    int e_time;
};

struct Available_Workshops
{
    int n; // number of workshops
    Workshop *workshops;
};

bool cmp(Workshop &a, Workshop &b)
{
    return a.e_time < b.e_time ? true : false;
}

Available_Workshops *initialize(int start_time[], int duration[], int n)
{

    Available_Workshops *ptr = new Available_Workshops[n];
    ptr->workshops = new Workshop[n];
    ptr->n = n;
    // sort(start_time, start_time + n);
    // sort(duration, duration + n);
    for (int i = 0; i < n; i++)
    {
        ptr->workshops[i].s_time = start_time[i];
        ptr->workshops[i].duration = duration[i];
        ptr->workshops[i].e_time = start_time[i] + duration[i];
    }
    sort(ptr->workshops, ptr->workshops + n, cmp);
    return ptr;
}
int CalculateMaxWorkshops(Available_Workshops *ptr)
{
    int count = 1;
    int t = ptr->workshops[0].e_time;
    for (int i = 1; i < ptr->n; i++)
    {
        if (ptr->workshops[i].s_time >= t)
        {
            count++;
            t = ptr->workshops[i].e_time;
            // cout << "flaf" << endl;
        }
    }
    return count;
}
int main()
{
    freopen("out.txt", "w", stdout);
    freopen("in.txt", "r", stdin);
    int n;
    cin >> n;
    int start_time[n], duration[n];

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        start_time[i] = x;
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        duration[i] = x;
    }
    Available_Workshops *ptr = initialize(start_time, duration, n);

    cout << CalculateMaxWorkshops(ptr) << endl;

    return 0;
}