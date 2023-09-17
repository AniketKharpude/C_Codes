//Write_C_program_to_copy_all_elements_of_one_array_to_another
#include <stdio.h>
#include <stdlib.h>
void main()
{
	int i, j, k, size, temp, array[10], duplicate_array[10];
	printf("Enter Array Size:");
	scanf("%d",&size);
	printf("Enter Array Elements:");
	for(i=0; i < size; i++)
	{
		scanf("%d",&array[i]);	
	}
	for(i=0; i < size; i++)
	{
		duplicate_array[i] = array[i];
	}
		for(i=0; i < size; i++)
	{
		printf("%d\t",duplicate_array[i]);	
	}
}