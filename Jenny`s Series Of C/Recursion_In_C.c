#include<stdio.h>
void display(int );
void main()
{
    int n=5;
    display(n);
}
void display(int n)
{
    if (n<1)
    {
        return;
    }
    else 
    {
        printf("%d\n",n);
        display(n-1);
        printf("%d\n",n);
    }
}