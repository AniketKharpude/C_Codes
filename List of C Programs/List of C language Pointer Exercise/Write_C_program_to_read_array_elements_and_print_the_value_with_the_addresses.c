//Write_C_program_to_read_array_elements_and_print_the_value_with_the_addresses
#include <stdio.h>
#include <string.h>
 void main()
 {
	 int array[10], size, *ptr, i;
	 printf("Enter Array Size:");
	 scanf("%d",&size);
	 printf("Enetr Array Elements:");
	 ptr=array;
	 for(i=0; i < size; i++)
	 {
		scanf("%d",&ptr[i]);
	 }
	 for(i=0; i < size; i++)
	 {
		printf("%u --> %d\t",&ptr[i], ptr[i]);
	 }
 }