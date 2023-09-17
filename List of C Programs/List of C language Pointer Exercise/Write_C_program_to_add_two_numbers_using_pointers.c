//Write_C_program_to_add_two_numbers_using_pointers
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
 void main()
 {
	 int a, b, sum=0, *p, *q;
	 printf("Enter Two Numbers: ");
	 scanf("%d%d",&a,&b);
		p = &a;
		q = &b;
		sum = *p + *q;
	 printf("Sum is :%d",sum);
 }