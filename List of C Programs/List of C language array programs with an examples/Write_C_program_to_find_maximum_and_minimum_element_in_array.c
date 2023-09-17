//Write_C_program_to_find_maximum_and_minimum_element_in_array
#include <stdlib.h>
#include <stdio.h>
void main()
{
	int i, size, maximum=0, minimum=0, array[10];
	printf("Enter Array Size:");
	scanf("%d",&size);
	printf("Enter Array Elements:");
	for(i=0; i < size; i++)
	{
		scanf("%d",&array[i]);	
	}
	maximum = array[0];
	minimum = array[0];
	for(i=0; i < size; i++)
	{
	    if(array[i] > maximum)
		{
			maximum = array[i];
		}
		if (array[i] < minimum	)
		{
			minimum = array[i];
		}
	}
	printf("%d Maximum Of Array Elements",maximum);
	printf("\t%d Minimum Of Array Elements",minimum);
}