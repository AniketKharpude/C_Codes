//Write_C_program_to_change_the_value_of_constant_integer_using_pointers
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
 void main()
 {
	 const int a;
	 int *ptr;
	 printf("Enter A Intger: ");
	 scanf("%d",&a);
	 ptr=&a;
	 printf("Enter New Value: ");
	 scanf("%d",ptr);
	 printf("a = %d",a);
 }