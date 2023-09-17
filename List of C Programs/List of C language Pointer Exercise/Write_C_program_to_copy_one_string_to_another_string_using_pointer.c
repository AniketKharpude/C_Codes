//Write_C_program_to_copy_one_string_to_another_string_using_pointer
#include <stdio.h>
#include <string.h>
 void main()
 {
	 char a[50];
     char b[50];
	 char *ptr;
	 int i;
	 puts("Enter A String");
	 gets(a);
	 ptr = a;
	 puts(ptr);
	 strcpy(b,ptr);
	puts(b);
 }