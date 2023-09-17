//Write_C_program_to_print_all_unique_element_in_an_array
#include <stdio.h>
#include <stdlib.h>
void main()
{
	int i, j, k, size, array[10];
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
			if (array[i] == array[j])
			{
				for(k=j; k < size-1; k++)
				{
					array[j] = array[k+1];
				}
				size--;
				j--;
			}
		}
	}
	for(i=0; i < size; i++)
	{
		printf("%d\t", array[i]);
	}
	
}