#include<stdio.h>
#include<conio.h>

int main()
{
    int temp;
    printf("Enter Temperature Of Your Room In Celcius\n");
    scanf("%d",&temp);
    if (temp <= 35 && temp > 25)
    {
        printf("Your Room Is At Normal Temperature\n");
    } 
    else
    {
        if(temp <= 25 )
       {
            printf("Your Room Is Cold");
       }
       else
        printf("Your Room Is Hot");
       
    }
return 0;
}
