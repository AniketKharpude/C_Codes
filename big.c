#include <stdio.h>
void main()
{
    int a;
    int arr[10];
    printf("Enter Array Elements: \n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    a = arr[0];
    for (int i = 0; i < (sizeof(arr)) / 4; i++)
    {
        if (arr[i] > a)
        {
            a = arr[i];
        }
    }
    printf("biggest Element in Array is %d\n", a);
}