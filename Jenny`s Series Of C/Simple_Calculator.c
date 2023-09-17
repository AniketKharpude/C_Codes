#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    int a,b,sum,sub,div,mult,Percentage;
    char operator;
    printf("Enter a Number:\t");
    scanf("%d \n",&a);
    scanf("%c \n",&operator);
    switch(operator)
    {
        case'+': scanf("%d",&b);
                 sum=a+b;
                 printf("sum is=%d",sum);
                 break;
        case'-': scanf("%d",&b);
                 sub=a-b;
                 printf("sub is=%d",sub);
                 break;
        case'*': scanf("%d",&b);
                 mult=a*b;
                 printf("mult is=%d",mult);
                 break;
        case'/': scanf("%d",&b);
                 div=a/b;
                 printf("div is=%d",div);
                 break;
        case'%': scanf("%d",&b);
                 Percentage=a%b;
                 printf("Percentage is=%d",Percentage);
				 break;        
        default:
        printf("Enter A Valid Operator");               
    }
    getch();
}
