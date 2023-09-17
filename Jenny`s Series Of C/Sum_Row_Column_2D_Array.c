#include <stdio.h>
#include <conio.h>

void main()
{
    int array[3][3];
    int i, j, SumRow, SumColumn;
    printf("Enter Elements of 2D Array:\n");
    // Taking Input Of 2D Array From User.
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }
    // For Loop Of Printing 2D Array
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d \t", array[i][j]);
        }
        printf("\n");
    }
    //  For Loop Of Summation
    for (i = 0; i < 3; i++)
    {
        SumRow = 0;
        SumColumn = 0;
        for (j = 0; j < 3; j++)
        {
            SumRow = SumRow + array[i][j];
            SumColumn = SumColumn + array[j][i];
        }
        printf("Sum of Row:%d\n", SumRow);
        printf("Sum of column:%d\n", SumColumn);
    }
}