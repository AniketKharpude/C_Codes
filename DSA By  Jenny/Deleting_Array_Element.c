#include <stdio.h>
#include <stdlib.h>
void main()
{
    int array[10], size, position, number;
    char ch;
    printf("Enter size: \n");
    scanf("%d", &size);
    printf("Enter Array Elements: \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }
start:
    printf("Enter position: \n");
    scanf("%d", &position);
//                Long Algorithm
//     for (int i = position - 1; i < size; i++)
//     {
//         array[i] = array[i + 1];
//     }
    
   /*          Quick Algorithm        */
   array[position-1]=array[size-1];
    size--;
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", array[i]);
    }
    printf("\n");
    fgetc(stdin);
      printf("Enter Esc to Exit Or Any Key To Continue.[  ]\b\b\b");
    ch = fgetc(stdin);
    if (ch == 27)
        exit;
    else
        goto start;
}