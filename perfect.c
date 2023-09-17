#include<stdio.h>
#include<conio.h>
int main(){
    int n,i,sum=0;
    printf("Enter no=");
    scanf("%d",&n);
    for(i=1; i<n; i++){
        printf("%d,%d \n",sum,i );
       
        if(n%i == 0){
            sum=sum+i;
             printf("%d,%d \n",sum,i);
         }
    }
     if(n == sum){
         printf("perfect \n");
     }
     else{
          printf("Not Perfect \n");
     }
}