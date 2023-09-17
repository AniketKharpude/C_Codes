//Write_C_program_to_swap_two_numbers_using_pointers
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
 void main()
 {
	 int a, b, temp, *p, *q;
	 printf("Enter Two Numbers: ");
	 scanf("%d%d",&a,&b);
	 p = &a;
     q = &b;
	 temp = *p;
	 *p = *q;
	 *q = temp;
	 printf("a= %d\tb= %d",a,b);
 }