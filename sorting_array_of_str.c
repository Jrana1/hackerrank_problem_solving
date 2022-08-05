#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print(char (*str)[10])
{
    for (int i = 0; i < 4; i++)
    {
        printf("%s\n", str[i]);
    }
}

int sort_by_length(const char *a, const char *b)
{

    int l1 = strlen(a);
    int l2 = strlen(b);
    if (l1 > l2)
        return 1;
    return 0;
}

int find_cnt_of_distinct_chars(const char *a)
{
    int cnt = 1;
    for (int i = 1; i < strlen(a); i++)
    {
        int j;
        for (j = 0; j < i; j++)
        {
            if (a[i] == a[j])
            {
                break;
            }
        }
        if (i == j)
            cnt++;
    }
    return cnt;
}

int sort_by_number_of_distinct_characters(const char *a, const char *b)
{

    int cnt1 = find_cnt_of_distinct_chars(a);
    int cnt2 = find_cnt_of_distinct_chars(b);
    if (cnt1 > cnt2)
        return 1;
    return 0;
}

int lexicographic_sort(const char *a, const char *b)
{

    int i = 0, j = 0;
    while (a[i] != '\0' && b[j] != '\0')
    {
        if (a[i] == b[j])
        {
            i++, j++;
        }
        else if (a[i] < b[j])
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}
int lexicographic_sort_reverse(const char *a, const char *b)
{

    int i = 0, j = 0;
    while (a[i] != '\0' && b[j] != '\0')
    {
        if (a[i] == b[j])
        {
            i++, j++;
        }
        else if (a[i] < b[j])
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
}

void string_sort(char (*str)[10], int cnt, int (*cmp_func)(const char *, const char *))
{

    for (int i = 0; i < cnt; i++)
    {

        for (int j = 0; j < cnt - i - 1; j++)
        {

            if (cmp_func(str[j], str[j + 1]))
            {
                char tmp[10];
                strcpy(tmp, str[j]);
                strcpy(str[j], str[j + 1]);
                strcpy(str[j + 1], tmp);
            }
        }
    }
}
int main()
{

    char str[][10] = {"wkue", "qoi", "sva", "fekls"};
    string_sort(str, 4, sort_by_length);
    print(str);

    return 0;
}