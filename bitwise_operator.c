#include <stdio.h>

// link of the problem: https://www.hackerrank.com/challenges/bitwise-operators-in-c

void calculate_the_maximum(int n, int k)
{
    int a_and_b = 0;
    int a_or_b = 0;
    int a_xor_b = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            int x = i & j;
            int y = i | j;
            int z = i ^ j;
            if (x < k && x > a_and_b)
            {
                a_and_b = x;
            }
            if (y < k && y > a_or_b)
            {
                a_or_b = y;
            }
            if (z < k && z > a_xor_b)
            {
                a_xor_b = z;
            }
        }
    }

    printf("%d\n", a_and_b);
    printf("%d\n", a_or_b);
    printf("%d\n", a_xor_b);
}

int main()
{

    int n, k;
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}