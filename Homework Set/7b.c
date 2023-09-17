// FINDING LARGE NUMBER IN AN ARRAY
#include <stdio.h>
void main()
{
    int array[10];
    int i, large;
    printf("enter array elements: \n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("\n");
    large = array[0];
    for (i = 0; i < 10; i++)
    {
        if (large < array[i])
        {
            large = array[i];
        }
    }
    printf("%d", large);
}