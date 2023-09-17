// c. Write a program in C to print all the letters in english
// alphabet using a pointer.
#include<stdio.h>

void main()
{
    int* ptr;
    int i,a;
    for (i=65;i<91;i++)
    {
        ptr=&i;
        printf("%c\n",*ptr);
    }
}