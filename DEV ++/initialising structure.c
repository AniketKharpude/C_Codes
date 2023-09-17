#include<stdio.h>

struct emp
{
	int eno;
	char ename;
	float esal;
	
};

int main()
{
	struct emp j={101,'Rohan',25000};
	printf("emp no is: %d \n",j.eno);
	printf("emp name is: %c \n",j.ename);
		printf("emp salary is: %f \n",j.esal);	
}
