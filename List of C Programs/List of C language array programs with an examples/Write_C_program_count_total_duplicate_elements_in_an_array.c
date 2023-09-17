//Write_C_program_count_total_duplicate_elements_in_an_array
#include <stdio.h>
#include <stdlib.h>
void main()
{
	int i, j, k, size, count=0, array[10];
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
			if(array[i] == array[j])
			{
				count++;
				break;
			}
		}
	}
	printf("%d is the number of total duplicate elements",count);
}
