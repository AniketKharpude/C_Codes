// FREQUENCY OF GIVEN ARRAY
#include <stdio.h>
void main()
{
    int array[10];
    int i, n;
    int count = 0;
    printf("Enter Array Elements: \n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &array[i]);
    }
    for (i = 0; i < 10; i++)
    {
        if (array[i] == 3)
        {
            count = count + 1;
        }
    }
    printf("Frequency Of Given Element is:%d", count);
}