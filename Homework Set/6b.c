#include <stdio.h>
#include <math.h>

int main()
{
    int arr[6] = {11, 12, 13, 14, 15, 16};
    // Printing Array In Orignal Order.
    int *ptr = arr;
    printf("%d\n", *ptr);
    int i;
    for (i = 0; i < 6; i++)
    {
        // arr[i]=i;
        printf("%d\t", arr[i]);
    }
    printf("\n");
    for(i=5; i>=0; i--)
    {
         printf("%d\t",arr[i]);
    }
}
