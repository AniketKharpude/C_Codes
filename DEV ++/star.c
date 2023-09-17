#include<stdio.h>
#include<conio.h>

int main()
{
	int i,j,rows;
	printf("Enter rows \n");
	scanf("%d",&rows);
	
		for(i=1; i<=rows; i++)
	{
		for(j=rows; j>=i; j--)
		{
			printf("*");
			
		}
		printf("\n");
	}
	return 0;
}
