#include <stdio.h>
#include <string.h>
union student
{
    int rollnumber;
    char name;
    float marks;
};
void main()
{
    union student s;
    union student *ptr = &s;
    // ptr->rollnumber = 27;
    ptr->name='Aniket';
    //  ptr->marks = 29.00;
    printf("%d\n", ptr->rollnumber);
    printf("%s\n", ptr->name);
    printf("%f\n", ptr->marks);
}