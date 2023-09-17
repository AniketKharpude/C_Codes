// C  Program To Concatenate Two Program
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
void main()
{
	char fname[15], lname[15];
	int size1, size2, i, j;
	printf("Enter Your First Name: ");
	gets(fname);
	printf("Enter Your Last Name: ");
	gets(lname);
// String Concatenatination Using Predefined Function.
	strcat(fname,lname);
	puts(fname);
// String Concatenatination Using Userdefined Function.
	size1 = sizeof(fname);
	size2 = sizeof(lname);
	for(i=0; i!= '\0'; i++)
	{
		fname[i+size1] = lname[i];
	}
	puts(fname);
}
	