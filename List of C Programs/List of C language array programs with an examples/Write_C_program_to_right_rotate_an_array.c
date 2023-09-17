//Write_C_program_to_right_rotate_an_array
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
		temp = array[size-1];
	for(i=size-1; i >= 0; i--)
	{
		array[i] = array[i-1];
	}
	array[0] = temp;
	for(i=0; i<size; i++)
	{
		printf("%d\t",array[i]);
	}
}