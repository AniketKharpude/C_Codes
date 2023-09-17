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

  printf("Enter number: \n");
  scanf("%d", &number);
  fgetc(stdin);

  for (int i = size - 1; i >= position - 1; i--)
  {
    array[i + 1] = array[i];
  }
  array[position - 1] = number;
  size++;
  for (int i = 0; i < size; i++)
  {
    printf("%d\t", array[i]);
  }
  printf("\n");
  printf("Enter Esc to Exit Or Any Key To Continue.[  ]\b\b\b");
  ch = fgetc(stdin);
  if (ch == 27)
  {
    exit;
  }
  else
    goto start;
}
