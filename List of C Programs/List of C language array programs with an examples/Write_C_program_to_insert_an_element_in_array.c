//Write_C_program_to_insert_an_element_in_array
#include <stdio.h>
#include <stdlib.h>
void main()
{
	int i, size, position, element, array[10];
	printf("Enter Array Size:");
	scanf("%d",&size);
	printf("Enter Array Elements:");
	for(i=0; i < size; i++)
	{
		scanf("%d",&array[i]);	
	}
	printf("Enter Element To Be Inserted:");
	scanf("%d",&element);
	//printf("Enter Position On Which Element To Be Inserted:");
	//scanf("%d",&position);
	size++;
	array[size-1] = element;
	for(i=0; i < size; i++)
	{
		printf("%d\t",array[i]);	
	}
}
	