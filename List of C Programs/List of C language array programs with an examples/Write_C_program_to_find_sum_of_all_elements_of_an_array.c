//Write_C_program_to_find_sum_of_all_elements_of_an_array
#include <stdlib.h>
#include <stdio.h>
void main()
{
	int i, size, sum=0, array[10];
	printf("Enter Array Size:");
	scanf("%d",&size);
	printf("Enter Array Elements:");
	for(i=0; i < size; i++)
	{
		scanf("%d",&array[i]);
		sum+=array[i];
	}
	printf("%d Is The Sum Total Array Elements",sum);
}