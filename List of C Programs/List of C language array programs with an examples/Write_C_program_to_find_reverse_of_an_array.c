//Write_C_program_to_find_reverse_of_an_array
#include <stdio.h>
#include <stdlib.h>
void main()
{
	int i,temp=0, size, array[10];
	printf("Enter Array Size:");
	scanf("%d",&size);
	printf("Enter Array Elements:");
	for(i=0; i < size; i++)
	{
		scanf("%d",&array[i]);	
	}
	for(i=0; i <= (size/2); i++)
	{
		temp = array[i];
		array[i] = array[size - i - 1];	
		array[size - i - 1] = temp;
	}
	for(i=0; i<size; i++)
	{
		printf("%d\t",array[i]);
	}
}