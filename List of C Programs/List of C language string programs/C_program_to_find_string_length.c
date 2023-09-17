// C  Program To Find String Length
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
void main()
{
	int i, count=0; 
	char string[50];
   printf("Enter String: ");
   gets(string);
   for(i=0; string[i] != '\0'; i++)
   {
	   count++;
   }
   
   printf("Number of Characters In  Entered String are %d\n",count);
}