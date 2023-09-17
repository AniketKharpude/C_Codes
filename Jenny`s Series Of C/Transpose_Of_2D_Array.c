#include <stdio.h>
#include <conio.h>

void main()
{
    int array[2][3];
    int i, j;
    printf("Enter Elements of 2D Array:\n");
    // Taking Input Of 2D Array From User.
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }
    printf("\n");
    // Printing 2D Array First.
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d \t", array[i][j]);
        }
        printf("\n");
    }
    // Transposing 2D Array
    printf("Transposing 2D Array: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d \t", array[j][i]);
        }
        printf("\n");
    }
}