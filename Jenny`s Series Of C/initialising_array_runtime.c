#include<stdio.h>
#include<conio.h>

int main()
{
 int i,j;
 int a[5];
 printf("Enter Elements Of Array\n");
 for(i=0; i<5; i++)
     scanf("%d",&a[i]);
     for(i=4; i>=0; i--)
     {
         printf("%d\t",a[i]);
     }
}