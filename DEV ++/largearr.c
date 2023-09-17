#include<stdio.h>

int main()
{
    int arr[7]={7,4,9,6,0,2,3};
    int large=arr[0];
    int i;
    for (i=0; i<7; i++ )
    {
        if (arr[i]>large)
        {
        large=arr[i];
        }
    }
  printf("%d is largest element of above array.\n",large);
  int small=arr[0];
  for (i=0; i<7; i++)
  {
      if (arr[i]<small)
      small=arr[i];
  }
  printf("%d is smallest of array elements.\n",small);
}