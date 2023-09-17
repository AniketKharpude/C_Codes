#include<stdio.h>
#include<conio.h>

int main()
{
	int n,i,c,sum=0;
	int temp;
	printf("Enter n Value: \n");				
	scanf("%d",&n);									
	temp=n;	
//	considering n=153
//               1 cobe +5cube+3cube
//              =1+125+27
//              =153														
	while(n>0)
	{                // 1st iteration             2nd iteration             3rd iteration             4th iteration 
		i=n%10;     //153%10=3 (reminder)      15%10=5 (reminder)                1%10=1                 CONDITION "FALSE" EXIT LOOP
		c=i*i*i;   //cube of 3                 cube of 5                         cube of 1
		sum=sum+c;   // 0+27                    27+125                             27+125+1
		n=n/10;     // 153/10=15 int value      15/10=1 int value                1/10=0 int value
	}
	n=temp;    //restoring n value from "temp" variable   
	if(n==sum) // checkin sum of numbers individual digits cube is equal to number itself or not
	{
		printf("%d is a armstrong number",n );
	}
		else
		{
			printf("%d is not a armstrong number",n);
		}
	return 0;
}

