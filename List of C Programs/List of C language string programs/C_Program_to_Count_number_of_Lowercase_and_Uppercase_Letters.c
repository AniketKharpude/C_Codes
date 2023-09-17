//C_Program_to_Count_number_of_Lowercase_and_Uppercase_Letters.c
#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
	char string[25];
	int lowercase=0, uppercase=0;
	printf("Enter Any String:");
	gets(string);
	for(int i=0; string[i] != '\0'; i++)
	{
		if(string[i] >= 65 && string[i] <= 90)
			uppercase++;
		if(string[i] >= 97 && string[i] <= 122)
			lowercase++;
	}
	printf("Uppercase characters in string are %d and Lowercase characters in string are %d",uppercase,lowercase);
}	
	