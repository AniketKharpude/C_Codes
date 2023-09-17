#include <stdio.h>
#include <string.h>
void line();
struct student
{
    int roll_number;
    char Name[50];
    char ClassName[10];
    float Marks;
};
void main()
{
    struct student Rohan;
    struct student Aniket = {88, "Aniket Sandip Kharpude", "10th D", 86.60};
    printf("Roll  Number :%d\n", Aniket.roll_number);
    printf("Name :%s\n", Aniket.Name);
    printf("Class :%s\n", Aniket.ClassName);
    printf("Marks :%f\n", Aniket.Marks);
    line();
    line();
    printf("Enter Roll Number :");
    scanf(" %d", &Rohan.roll_number);
    fgetc(stdin);
    line();
    printf("Enter Name: ");
    fgets(Rohan.Name, 50, stdin);
    Rohan.Name[strlen(Rohan.Name) - 1] = 0;
    line();
    printf("Enter Class Name: ");
    fgets(Rohan.ClassName, 10, stdin);
    Rohan.ClassName[strlen(Rohan.ClassName) - 1] = 0;
    line();
    printf("Enter Marks: ");
    scanf("%f", &Rohan.Marks);
    line();
    line();
    printf("Roll Number :%d\n", Rohan.roll_number);
    line();
    printf("Name :%s\n", Rohan.Name);
    line();
    printf("Class :%s\n", Rohan.ClassName);
    line();
    printf("Marks :%f\n", Rohan.Marks);
    line();
}
void line()
{
    for (int i = 0; i < 30; i++)
        printf("~");
        printf("\n");
}