#include <stdio.h>

void main()
{
    
    int arr[10];
    int i, a;
    for (i = 0;i<10;i++)
    {
        scanf("%d",&arr[i]);
        // printf("%d\t",arr[i-1]);
        // printf("\n");
        if (arr[i]==arr[i-1])
        {
            arr[i]=arr[i+1];
        }
        // else
        // {
        //     arr1[i]=arr[i];
        // }
    }
    for (i=0;i<10;i++)
    {
        printf("%d\t",arr[i]);`
    }
}