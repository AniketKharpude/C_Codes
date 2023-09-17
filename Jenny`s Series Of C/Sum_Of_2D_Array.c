#include <stdio.h>
#include <conio.h>

void main()
{
    int array[10][5];
    int i, j, sum = 0;
    printf("Enter Elements of 2D Array:\n");
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 5; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%d \t", array[i][j]);
            sum += array[i][j];
        }
        printf("\n");
    }
    printf("Sum Is: %d", sum);
}