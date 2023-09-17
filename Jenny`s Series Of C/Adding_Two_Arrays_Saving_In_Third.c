#include <stdio.h>

void main()
{
    int a[5], b[5], SumArray[5];
    int i;
    // initializing arrays at runtime
    for (i = 0; i < 5; i++)
    {
        printf("a[%d]:", i);
        scanf("%d", &a[i]);
        printf("b[%d]:", i);
        scanf("%d", &b[i]);
    }
    // assigning sum of first two arrays to the SumArray and Printing it.
    for (i = 0; i < 5; i++)
    {
        SumArray[i] = a[i] + b[i];
        printf("%d \t", SumArray[i]);
    }
    printf("\n");
    //    Printing First Array.
    for (i = 0; i < 5; i++)
    {
        printf("%d \t", a[i]);
    }
    printf("\n");
    // Printin Second Array.
    for (i = 0; i < 5; i++)
    {
        printf("%d \t", b[i]);
    }
    printf("\n");
    //   Printing SumArray
    // for ( i = 0; i < 5; i++)
    // {
    //     printf("%d \t",SumArray[i]);
    // }
}
