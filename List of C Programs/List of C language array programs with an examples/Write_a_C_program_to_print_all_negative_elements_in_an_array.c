//Write a C program to print all negative elements in an array
#include <stdlib.h>
#include <stdio.h>
void main()
{
	int i, size, count=0, array[10];
	printf("Enter Array Size:");
	scanf("%d",&size);
	printf("Enter Array Elements:");
	for(i=0; i < size; i++)
	{
		scanf("%d",&array[i]);
	//printf("chaitan");
		if(array[i] < 0)
		{
		   count+=1;
		   printf("%d\t",array[i]);
		}
	}
	printf("Negative Numbers In Array Are %d:",count);
}
	
			