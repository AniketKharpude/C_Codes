#include<stdio.h>
#include<string.h>

void main()
{
char First_Name[30];
char Last_Name[30];
printf("Enter Your First Name:");
gets(First_Name);
printf("Enter Your Last Name:");
gets(Last_Name);
int value;
value = strcmp(First_Name,Last_Name);
if(value == 0)
{
	printf("First Name and Last Name cannot be same.\n");
}
else
{
	printf("Press Any Key To Continue...\n");
}
}

