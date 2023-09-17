#include<stdio.h>	
void main()
{
    int i,arr[10];
    int even=0;
    int odd=0;
    printf("Enter array Elements: \n");
    for ( i = 0; i < 10; i++)
    {
        scanf("%d",&arr[i]);
        if (arr[i]%2 == 0)
        {
            even = even + 1;
        }
        else
        {
            odd = odd + 1;
        } 
    }
    printf("Total Odd Numbers : %d \n",odd);
    printf("Total even Numbers : %d ",even);
}
