#include<stdio.h>
#include<conio.h>

int main()
{
	int condition1, condition2, n, i;
	printf("Enter Number You Want To Check Prime Or Not:");
	scanf("%d",&n);
	
	for (i = 2; i < n; i++)
	{
		if(n % i==0)
		{
		 condition1=1;	
	      }
	      else
	      {
	      	condition1=0;
		  }
	      break;
	}
	if ( n % 1==0 && n%n==0)
	{
		condition2=1;
	}
	if( condition1==1)
	{
		printf("The Above Number Is not Prime Number");
	}
	else
	{
		printf("The Above Number Is Prime Number");
	}
}
