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
typedef struct student ss;
void main()
{
ss Aniket = {88, "Aniket Sandip Kharpude", "10th D", 86.60};
    printf("Roll  Number :%d\n", Aniket.roll_number);
    printf("Name :%s\n", Aniket.Name);
    printf("Class :%s\n", Aniket.ClassName);
    printf("Marks :%f\n", Aniket.Marks);
    ss *ptr=&Aniket;
    printf("Roll  Number :%d\n", ptr->roll_number);
    printf("Name :%s\n", ptr->Name);
    printf("Class :%s\n", ptr->ClassName);
    printf("Marks :%f\n", ptr->Marks);
}