#include <stdio.h>
int sum(int, int);
int sub(int, int);
void line();

int callback(int (*fptr)(int, int));
int main()
{
    int Sum = 0;
    int Sub = 0;
    Sum = callback(&sum);
    line();
    Sub = callback(&sub);
    line();
    line();
    printf("Sum of two Number is: %d\n", Sum);
    line();
    printf("Sub of two Number is: %d\n", Sub);
    line();
}
int callback(int (*fptr)(int, int))
{
    int a, b;
    printf("Enter Two Numbers: \n\t");
    scanf("\t%d%d", &a, &b);
    fptr(a, b);
}
int sum(int a, int b)
{
    line();
    printf("\t%d\n", a + b);
    return (a + b);
}
int sub(int a, int b)
{
    line();
    printf("\t%d\n", a - b);
    return (a - b);
}
void line()
{
    for (int i = 0; i < 30; i++)
    {
        printf("~");
    }
    printf("\n");
}