#include<stdio.h>
#include<conio.h>

int main()
{
	int i,j,rows;
	printf("Enter the Value Of rows; \n");
	scanf("%d",&rows);
	
	for(i=1; i<=rows; i++) //incicating number of row from top
	{
		for(j=1; j<i; j++) // printing space in row
		{
			printf(" ");
		}
		for(j=1; j<=rows*2-(2*i-1); j++)  //printing star after row (if available)
		printf("*");
		printf("\n");
		
	}
}
