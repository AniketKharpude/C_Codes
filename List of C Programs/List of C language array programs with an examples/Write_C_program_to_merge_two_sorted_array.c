//Write_C_program_to_merge_two_sorted_array
#include <stdio.h>
#include <stdlib.h>
void main()
{
	int i, j, k, size1, size2, count=0, arr1[10], arr2[10];
	printf("Enter Array 1 Size:");
	scanf("%d",&size1);
	printf("Enter Array Elements:");
	for(i=0; i < size1; i++)
	{
		scanf("%d",&arr1[i]);	
	}
	printf("Enter Array 2 Size:");
	scanf("%d",&size2);
	printf("Enter Array Elements:");
	for(i=0; i < size2; i++)
	{
		scanf("%d",&arr2[i]);	
	}
	int new_size = size1 + size2;
	for(i=0; i < new_size; i++)
	{
		arr1[i+size1] = arr2[i];
	}
	for(i=0; i < new_size; i++)
	{
		printf("%d\t",arr1[i]);
	}
}
