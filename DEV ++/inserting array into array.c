#include<stdio.h>

int main()
{
//	initializing 2 arrrays
int a[100]={1,2,3,4,5};
int b[10]={100,200,300};
  int i;
int m=5;
int n=3;
int pos=3;
  	for (i=0; i< m; i++)
 		 {
  			printf("%d""\t",a[i]);
  		}
printf("\n");
   for (i=0; i< n; i++)
 		 {
  			printf("%d""\t",b[i]);
 		 }
  		for (i=m-1; i>=pos; i-- )
  			{
  				a[i+n]=a[i];
 			 }
 			 printf("\n");
 			 for (i=0; i< 10; i++)
 		 {
  			printf("%d""\t",a[i]);
  		}
  		for (i=0; i<n; i++)
  		{
  			a[pos+i]=b[i];
		  }
		  printf("\n");
		   for (i=0; i< 10; i++)
 		 {
  			printf("%d""\t",a[i]);
  		}
}
