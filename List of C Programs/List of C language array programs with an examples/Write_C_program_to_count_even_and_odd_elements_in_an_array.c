//Write_C_program_to_count_even_and_odd_elements_in_an_array
#include <stdlib.h>
#include <stdio.h>
void main()
{
	int i, size, ecount=0, ocount=0, array[10];
	printf("Enter Array Size:");
	scanf("%d",&size);
	printf("Enter Array Elements:");
	for(i=0; i < size; i++)
	{
		scanf("%d",&array[i]);
		if(array[i] % 2 == 0 )
			ecount++;
		else
			ocount++;
	}
	printf("%d Total Even Array Elements",ecount);
	printf("\t%d Total Odd Array Elements",ocount);
}
