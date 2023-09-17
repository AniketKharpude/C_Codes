#include<stdio.h>
#include<conio.h>

int main(){

 int x=5, y=8;

    // printf("%d, \n", &x);
    // printf("%d,\n",&y);
    int z;
    int *ptr=&y;
    printf("%d,\n",*ptr );


    return 0;
}