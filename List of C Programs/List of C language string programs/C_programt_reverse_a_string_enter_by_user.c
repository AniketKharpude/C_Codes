// C  Program To Reverse String Entered By User
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
void main()
{
	int i, length; 
	char string[50], ch;
   printf("Enter String: ");
   gets(string);
   length = strlen(string)-1;
   for(i=0; i <= length/2; i++)
   {
	    ch = string[i];
		string[i] = string[length-i];
		string[length-i] = ch;
   }
	puts(string);
}