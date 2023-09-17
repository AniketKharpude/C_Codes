//Write_C_program_to_sort_an_array_in_ascending_order
#include <stdio.h>
#include <stdlib.h>
void main()
{
	int i, j, k, size, temp, array[10];
	printf("Enter Array Size:");
	scanf("%d",&size);
	printf("Enter Array Elements:");
	for(i=0; i < size; i++)
	{
		scanf("%d",&array[i]);	
	}
	for(i=0; i < size; i++)
	{
		for(j=i+1; j < size; j++)
		{
			if(array[i] > array[j])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
		for(i=0; i < size; i++)
	{
		printf("%d\t",array[i]);	
	}
}	
	