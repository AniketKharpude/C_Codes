#include<stdio.h>

int main()
{
//	reversing an integer
int n;
int rev = 0;
printf("Enter The Value Of n: ");
scanf("%d", &n);
while(n != 0);
{
rev = rev*10 + n%10;
 n = n/10;
}
printf("reverse of n is: %d",rev);
}

