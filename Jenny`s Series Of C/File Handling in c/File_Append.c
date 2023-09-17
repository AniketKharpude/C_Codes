#include <stdio.h>
#include <string.h>
void line();
struct student
{
    int roll_number;
    char Name[50];
    char ClassName[100];
    float Marks;
};
FILE *fp;
void main()
{
    fp = fopen("Aniket.txt", "a");
    struct student Rohan;
    line();
    line();
    printf("Enter Roll Number :");
    scanf(" %d", &Rohan.roll_number);
    fgetc(stdin);
    // line();
    printf("Enter Name: ");
    fgets(Rohan.Name, 50, stdin);
    Rohan.Name[strlen(Rohan.Name) - 1] = 0;
    // line();
    printf("Enter Class Name: ");
    fgets(Rohan.ClassName, 100, stdin);
    Rohan.ClassName[strlen(Rohan.ClassName) - 1] = 0;
    // line();
    printf("Enter Marks: ");
    scanf("%f", &Rohan.Marks);
    // line();
    // line();
    fprintf(fp, "\tRoll Number :%d\n", Rohan.roll_number);
    // line();
    fprintf(fp, "\tName :%s\n", Rohan.Name);
    // line();
    fprintf(fp, "\tClass :%s\n", Rohan.ClassName);
    // line();
    fprintf(fp, "\tMarks :%f\n", Rohan.Marks);
    // line();
    fclose(fp);
    printf("Append Succesfull......\n");
}
void line()
{
    fprintf(fp,"/************************************************************************/\n");
}