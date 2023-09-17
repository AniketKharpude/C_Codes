#include <stdio.h>
int sum(int, int);
void main()
{
    int (*ptr)(int, int)=&sum;
    int s = 0;
    s=(*ptr)(5,4);
    printf("%d\n",s);
}
int sum(int a, int b)
{
 return (a+b);
}