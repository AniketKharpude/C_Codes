// INSERTING A ELEMEMENT IN ARRAY AT LAST POSITION
#include <stdio.h>
void main()
{
    int i, position, element;
    int array[5] = {1, 2, 3, 4, 5};
    printf("Enter Element To be Inserted: \n");
    scanf("%d", &element);
    printf("Enter Position To Be Entered: \n");
    scanf("%d", &position);
    for (i = position; i >= 0; i--)
    {
        array[i] = element;
        if (array[position] == element)
        {
            break;
        }
    }
    for (i = 0; i <= 5; i++)
    {
        printf("%d \t", array[i]);
    }
}