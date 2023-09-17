#include<stdio.h>

void print(int );
void main()
{
    int a;
    print(10);
}
void print(int a)
{
    if (a < 1)
    return;
    printf("%d\n",a);
    print(a/2);
}
