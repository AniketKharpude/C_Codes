#include <stdio.h>
int func1(int);
int func2(int);
void main()
{
    printf("%d\n",func1(5));
}
int func1(int n)
{
    if (n<=1)
    return 1;
    else
    return n*func2(n-1);
}
int func2(int n)
{
    if (n<=1)
    return 1;
    else
    return n*func1(n-1);
}
