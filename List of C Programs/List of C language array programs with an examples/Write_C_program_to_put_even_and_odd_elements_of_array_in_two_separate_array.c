//Write_C_program_to_put_even_and_odd_elements_of_array_in_two_separate_array
#include <stdio.h>
#include <stdlib.h>
void main()
{
	int i, j=0, k=0, size, array[10], even[10], odd[10];
	printf("Enter Array 1 Size:");
	scanf("%d",&size);
	printf("Enter Array Elements:");
	for(i=0; i < size; i++)
	{
		scanf("%d",&array[i]);	
	}
	for(i=0; i < size; i++)
	{
		if (array[i] % 2 == 0)
		{
			even[j] = array[i];
			j++;
		}
		else if (array[i] % 2 != 0)
		{
			odd[k] = array[i];
			k++;
		}
	}
	for(i=0; i < j; i++)
	{
		printf("%d\t",even[i]);
	}
	printf("\n");
		for(i=0; i < k; i++)
	{
		printf("%d\t",odd[i]);
	}
}