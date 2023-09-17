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
    FILE *fp;
    fp = fopen("Aniket.txt", "w");
    struct student Rohan;
    struct student Aniket = {88, "Aniket Sandip Kharpude", "10th D", 86.60};
    fprintf(fp, "\tRoll  Number :%d\n", Aniket.roll_number);
    fprintf(fp, "\tName :%s\n", Aniket.Name);
    fprintf(fp, "\tClass :%s\n", Aniket.ClassName);
    fprintf(fp, "\tMarks :%f\n", Aniket.Marks);
    fprintf(fp,"/*===========================================================*/\n");
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
    fprintf(fp, "\tRoll Number :%d\n", Rohan.roll_number);
    line();
    fprintf(fp, "\tName :%s\n", Rohan.Name);
    line();
    fprintf(fp, "\tClass :%s\n", Rohan.ClassName);
    line();
    fprintf(fp, "\tMarks :%f\n", Rohan.Marks);
    line();
    fclose(fp);
}
void line()
{
    for (int i = 0; i < 30; i++);
}