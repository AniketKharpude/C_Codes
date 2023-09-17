//Write_a_C_program_to_Store_Information_in_Structure_and_Display_it
#include <stdio.h>
#include <conio.h>
#include <stddlib.h>
struct info
{
	char name[25];
	int Phone_no[10];
};
void main()
{
	struct info a ;
	printf("Enter Your Name:");
	scanf("%s",a.name);
	printf("Enter Your Number:");
	scanf("%d",a.Phone_no);
	printf("%s",a.name);
	printf("%d",a.Phone_no);
}