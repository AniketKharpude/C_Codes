#include<stdio.h>

int main()
{
     int arr[10]={1,3,5,7,9,2,4,6,8,10};
    for(int i=0; i<=arr[9]; i++)
    {
        if (arr[i]%2!=0)
        {
            printf("%d \n",arr[i]);
        }
    }
}