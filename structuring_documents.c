#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct word
{
    char *data;
};
struct sentence
{
    struct word *data;
    int word_count;
};
struct paragraph
{
    struct sentence *data;
    int sentence_count;
};
int main()
{
    char str[32];
    scanf("%[^\n]%*c", str);
    printf("%s\n", str);

    return 0;
}