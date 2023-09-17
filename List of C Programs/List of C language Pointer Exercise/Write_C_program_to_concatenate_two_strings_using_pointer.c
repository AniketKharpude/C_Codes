//Write_C_program_to_concatenate_two_strings_using_pointer
#include <stdio.h>
#include <string.h>
 void main()
 {
	 char a[50];
     char b[50];
	 char *ptr1, *ptr2;
	 int i;
	 puts("Enter A String");
	 gets(a);
	 gets(b);
	 ptr1 = a;
	 ptr2 = b;
	 strcat(ptr1,ptr2);
	puts(ptr1);
 }