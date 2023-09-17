#include <stdio.h>
#include <string.h>
struct Student
{
    int rollnumber;
    char name[50];
    float marks;
};
struct Student s;
void main()
{
    struct Student *ptr = &s;
    printf("Enter Roll Number:");
    scanf("%d", &ptr->rollnumber);
    fgetc(stdin);
    printf("Enter name:");
    fgets(ptr->name, 50, stdin);
    ptr->name[strlen(ptr->name)-1]=0;
    printf("Enter Marks:");
    scanf("%f", &ptr->marks);
    printf("Roll Number:%d\n", ptr->rollnumber);
    printf("Name:%s\n", ptr->name);
    printf("Marks:%f\n", ptr->marks);
}
