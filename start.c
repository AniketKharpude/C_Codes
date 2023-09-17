#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,n=5;
    // printf("enter n= \n");
    // scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(j=5; j>=i; j--)
        {
            printf(" *");
        }
        printf("\n");
    }
}