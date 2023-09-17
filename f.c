#include<stdio.h>
#include<math.h>

int Square(int n);

int main(){
   int n;
    printf("enter the value of side: ");
    scanf("%d",&n);
   printf("Sqaure is: %d",Square(n));
return 0;
}

int Square(int n){
    return n*n;
}