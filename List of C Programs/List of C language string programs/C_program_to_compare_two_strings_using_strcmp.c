//C_program_to_compare_two_strings_using_strcmp.c
#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
	char string[50], string2[10];
	printf("Enter Any String: ");
	gets(string);
	printf("Enter Any String To Compare: ");
	gets(string2);
	printf("Entered Strings Are %s", strcmp(string,string2)?"Not Equal":"Equal");
}	
	