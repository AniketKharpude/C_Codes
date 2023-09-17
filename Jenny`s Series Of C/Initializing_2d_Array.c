#include <stdio.h>
#include <conio.h>
// Initializing_2D_Array
void main()
{
    int array[4][5];
    int i, j;
    printf("Enter Elements of 2D Array:\n");
    // Taking Input Of 2D Array From User.
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }
    printf("\n");
    // Printing 2D Array.
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%d\t", array[i][j]);
        }
        printf("\n");
    }
}
