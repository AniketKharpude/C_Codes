#include<stdio.h>

int main(){
int num1,num2;
printf("Enter Two Numbers: \n");
scanf("%d,%d,",&num1,&num2);
if(num1<num2){
    printf("it is smallest :%d",num1);
}
else{
    printf("it is smallest : %d",num2);
}
}