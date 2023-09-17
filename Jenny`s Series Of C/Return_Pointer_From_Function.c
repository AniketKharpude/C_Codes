#include<stdio.h>
int* returnpointer(int[]);

void main()
{
    int a[10],*p;
    printf("Enter Array Elemeents:");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("%d\n",*a);
    p=returnpointer(a);
    printf("%d\n",*p);
}
int* returnpointer(int p[])
{
  p=p+2;
  return p;
}