#include<stdio.h>
/* GLOBAL Declaration of STRUCTURES 
allows us accses it from anywhere in code/programm
 creat structure before main function
*/
/* LOCAL Declaration of STRUCTURES 
 Doesn`t allows us accses it from anywhere in code/programm 
 creat structure followed by main function
 */
struct Emp
{
	int Empnumber;
	float Empsalary;
	char Empname[20];
};
int main()
{
	struct Emp e;
	printf("size of struct emp: %d",sizeof(e));
}
