//Write_a_C_program_to_Store_Information_in_Structure_and_Display_it
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct info
{
	char name[25];
    long int Phone_no;
};
void main()
{
	struct info a ;
	printf("Enter Your Name:");
	scanf("%s",a.name);
	printf("Enter Your Number:");
	scanf("%ld",a.Phone_no);
	printf("%s\n",a.name);
	printf("%ld",a.Phone_no);
}