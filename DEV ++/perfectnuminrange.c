#include<stdio.h>
#include<conio.h>

int main()
{
	int i,n,sum;
	int limit;
	printf("Enter Limit \n");
	scanf("%d",&limit);

	for(n=1; n<=limit; n++)
	{
		sum=0;
		for(i=1; i<n; i++)
		{
		if(n%i== 0)
		{
				sum=sum+i;
		}
	}
	if(n==sum)
	printf("%d \n",n);
	
	}
}
