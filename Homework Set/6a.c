#include <stdio.h>
void main()
{
    int a, b;
    int *p, *q;
    p=&a; q=&b;
    printf("Entre Two Numbers: \n");
    scanf("%d%d",&a,&b);
    if(*p>*q)
    printf("%d is bigger Number than %d\n",a,b);
    else 
    printf("%d is bigger Number than %d\n",b,a);
    printf("A is :%d\n B is :%d\n",*p,*q);

}