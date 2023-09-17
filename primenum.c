#include<stdio.h>
#include<conio.h>
int main(){
    int n,i,count=0;
    printf("Enter n value \n");
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        if(n%i==0){
            count++;
        }
    }
     if(count++==2)
     printf("Given number %d is prime",n);
     else
    printf("Given number %d is not prime",n);
    
}