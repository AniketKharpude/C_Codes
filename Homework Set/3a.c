#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int n,r,sum=0,temp;
     printf("enter value of n \n");
    scanf("%d",&n);
    temp=n;
    while(n>0){
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }
    if(temp==sum)
    printf("Number Is Armstrong Number");
    else
    printf("Number Is Not Armstrong Number");
    return 0;
}