// C  Program To Count Alphabates Special Characters Numbers in String Entered By User
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
void main()
{
	int i, length, alphabates=0, numbers=0, characters=0; 
	char string[50], ch;
   printf("Enter String: ");
   gets(string);
   length = strlen(string);
   for(i=0; i < length; i++)
   {
	   if (string[i] <= 90 && string[i] >= 65)
		   alphabates++;
	   if (string[i] <= 122 && string[i] >= 97)
		   alphabates++;
	   if (string[i] <= 57 && string[i]	>= 48)   
		   numbers++;
	   else
		   characters++;
   }
   printf("Number Of Characters %d, Number of Alphabates %d, Number of Numbers %d",characters,alphabates,numbers);
	
}