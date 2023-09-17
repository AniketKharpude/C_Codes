#include <stdio.h>
int print(int);

void main()
{
    int x;
    x = print(10);
    printf("%d\n", x);
}
int print(int a)
{
    if(a<1)
    return;
    else
    return 1+print(a/2);
}