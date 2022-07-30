#include <stdio.h>
int add(int a, int b)
{
    return a + b;
}
void sayHello(char *str)
{

    printf("hello %s\n", str);
}
int main()
{

    int (*ptr)(int, int);
    ptr = &add;
    int c = (*ptr)(3, 9);
    printf("%d\n", c);

    void (*fptr)(char *);
    fptr = &sayHello;
    char str[] = "jewel";
    (*fptr)(str);

    return 0;
}