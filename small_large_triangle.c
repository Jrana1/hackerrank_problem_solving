// problem link : https://www.hackerrank.com/challenges/small-triangles-large-triangles
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef struct Triangle
{
    /* data */
    int a, b, c;
} Triangle;
double find_area(double a, double b, double c)
{
    double p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

void sort_by_area(Triangle *tr, int n)
{
    // using bubble sort
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (find_area(tr[j].a, tr[j].b, tr[j].c) > find_area(tr[j + 1].a, tr[j + 1].b, tr[j + 1].c))
            {
                Triangle tmp = tr[j];
                tr[j] = tr[j + 1];
                tr[j + 1] = tmp;
            }
        }
    }
}

int main()
{

    int cs;

    scanf("%d", &cs);
    Triangle *tr = (Triangle *)malloc(cs * sizeof(Triangle));
    int i = 0;
    int tm = cs;
    while (cs--)
    {
        scanf("%d %d %d", &tr[i].a, &tr[i].b, &tr[i].c);
        i++;
    }
    sort_by_area(tr, tm);
    for (int j = 0; j < tm; j++)
        printf("%d %d %d\n", tr[j].a, tr[j].b, tr[j].c);
    return 0;
}