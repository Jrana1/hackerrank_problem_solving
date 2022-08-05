#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
// some uses of Function pointer

// 1. changing logic during sorting algorithm. like whether we want to sort in decreasing or increasing order

bool compare(int a, int b)
{

    if (a > b)
        return false;
    return true;
}

// compare function is used as a callback function. And this function is helfing us to decide in which Rank we should sort the list
int bubble_sort(int *A, int len, bool (*comare)(int, int))
{

    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len - i - 1; j++)
        {
            if (compare(A[j], A[j + 1]))
            {
                int tmp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = tmp;
            }
        }
    }
}

// another use of function pointer is --> the built in function qsort in C.
int compare1(const void *a, const void *b)
{
    int A = *(int *)a;
    int B = *(int *)b;
    return B - A;
}
int main()
{
    int A[5] = {3, 9, 0, 1, 2};
    qsort(A, 5, sizeof(int), compare1);
    for (int i = 0; i < 5; i++)
    {
        printf("%d,", A[i]);
    }

    return 0;
}