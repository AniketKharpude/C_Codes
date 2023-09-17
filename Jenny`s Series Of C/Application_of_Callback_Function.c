#include <stdio.h>
void mul(int);
void add(int);
void sub(int);
void div(int);

void main()
{
    int a;
    char ch;
    scanf("%d", &a);
    void (*fptr[10])(int) = {add, sub, mul, div};
    scanf("%c", &ch);
    switch (ch)
    {
    case '+':
        (*fptr[0])(a);
        break;
    case '-':
        (*fptr[1])(a);
        break;
    case '*':
        (*fptr[2])(a);
        break;
    case '/':
        (*fptr[3])(a);
        break;
    default:
        printf("Enter Valid Operator");
    }
}
void add(int a)
{
    int b;
    scanf("%d", &b);
    printf("%d\n", a+b);
}
void mul(int a)
{
    int b;
    scanf("%d", &b);
    printf("%d\n", a*b);
}
void sub(int a)
{
    int b;
    scanf("%d", &b);
    printf("%d\n", a-b);
}
void div(int a)
{
    int b;
    scanf("%d", &b);
    printf("%d\n", a/b);
}