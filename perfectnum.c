#include<stdio.h>
#include<conio.h>
int main()
{
  int start, end, n, i, sum;
  printf("Enter the starting number of the range");
  scanf("%d",&start);
  printf("Enter the ending number of the range");
  scanf("%d",&end);
  for(n=start;n<=end;n++)
  {
    sum=0;
    for(i=1;i<n;i++)
    {
      if(n%i==0)
      {
        sum=sum+i;
      }
    }
    if(n==sum)
    {
      printf("%d \n",n);
    }
  }
}
    

