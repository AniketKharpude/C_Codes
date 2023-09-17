//Write_C_program_to_find_length_of_string_using_pointer
#include <stdio.h>
 void main()
 {
	 char a[50];
	 char *ptr;
	 int count=0, i;
	 puts("Enter A String");
	 gets(a);
	 ptr = a;
	 puts(ptr);
	 for(i=0; ptr[i] != '\0'; i++)
	 {
		 count++;
	 }
	 printf("Length Of Given String is excluding NULL Character %d",count);
 }