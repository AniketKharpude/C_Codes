//Write_C_program_input_and_print_array_elements_using_pointer
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
 void main()
 {
	 int size, i, *p, *q, array[10];
	 printf("Enter Size Of Array: ");
	 scanf("%d",&size);
	 p=array;	
	 for(i=0; i < size; i++)
	 {
		 scanf("%d",&p[i]);
	 }
	 for(i=0; i < size; i++)
	 {
		 printf("%d\t",p[i]);
	 }
 }