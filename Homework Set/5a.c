#include<stdio.h>
#include<conio.h>

int calsum(int x,int y);
int main()
{
	int a,b,sum;
	printf("Enter two Numbers \n");
	scanf("%d \n %d",&a,&b);
	sum=calsum(a,b);
	printf("Sum of Above Digits is:%d",sum);
}
int calsum(int x,int y)
{
	int result;
	result= x+y;
	return result;
}
