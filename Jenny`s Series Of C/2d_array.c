#include<stdio.h>
void main()
{
	int a[2][3];
	int i,j;
	printf("=============================\n");
	printf("Enter Array Elements\n");
	
	printf("=============================\n");
		for(i=0; i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("=============================\n");
	printf("%d\n",a[0][0]);
		printf("=============================\n");
	for(i=0; i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d \t",a[i][j]);
		}
		printf("\n");
		
	printf("=============================\n");
	}
}
