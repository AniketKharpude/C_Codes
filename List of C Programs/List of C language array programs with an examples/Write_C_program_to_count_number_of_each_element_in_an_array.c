//Write_C_program_to_count_number_of_each_element_in_an_array
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
		count=0;
		for(j=0; j < size; j++)
		{
			if(array[i] == array[j])
			{
				count++;
			}
		}
			printf("Frequency of %d element is %d times\n",array[i],count);
	}
}
	