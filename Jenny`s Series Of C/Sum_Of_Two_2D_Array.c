#include <stdio.h>
#include <conio.h>

void main()
{
    int A[2][3], B[2][3], C[2][3];
    int i, j;
    // Taking input from User.
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &A[i][j]);
        }
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }
    // Sum Of Two 2D Array.
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
              printf("%d\t", C[i][j]);
        }
         printf("\n");
    }
//     for (i = 0; i < 2; i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             printf("%d\t", C[i][j]);
//         }
//         printf("\n");
//     }
 }