// Sorting & Merging Of Two Arrays In Desending Order
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main()
{
 int temp, i, j, size_of_1st_Array, size_of_2nd_Array, array1[20], array2[20];
  printf("Enter Size Of 1st array\n");
  scanf("%d",&size_of_1st_Array);
  printf("Enter Elements Of 1st array\n");
  for(i=0; i < size_of_1st_Array; i++)
  {
	  scanf("%d",&array1[i]);
  }
  printf("\n");  
  printf("Enter Size Of 2nd array\n");
  scanf("%d",&size_of_2nd_Array);
  printf("Enter Elements Of 2nd array\n");
  for(i=0; i < size_of_2nd_Array; i++)
  {
	  scanf("%d",&array2[i]);
  }
  // Merging Of Two Arrays
	int new_size=size_of_1st_Array + size_of_2nd_Array;
	for(i=0; i < new_size; i++)
	{
		array1[i+size_of_1st_Array] = array2[i];
	}
// Sorting Of Merged Array
	for(i=0; i < new_size; i++)
	{
		for(j=i+1; j < new_size; j++)
		{
			if(array1[i] < array1[j])
			{
				temp = array1[i];
				array1[i] = array1[j];
				array1[j] = temp;
			}
		}
	}
	//Printing Of Merged Array
	for(i=0; i < new_size; i++)
  {
	  printf("%d\t",array1[i]);
  }
}