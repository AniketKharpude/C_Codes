// C  Program To Convert String Into Lower Case
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
void main()
{
	int i; 
	char string[50];
   printf("Enter String: ");
   gets(string);
   for(i=0; string[i] != '\0'; i++)
   {
	   if (string[i] <= 90 && string[i] >= 65)
		   string[i] += 32;
   }
	puts(string);
}