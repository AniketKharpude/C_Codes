#include<stdio.h>
#include<string.h>
 struct Student
{int RollNumber;
 char Name[50];
 float Marks;
};
void main()
{
  struct Student s[2];
 int i;
 for (i=0;i<2;i++)
 {
   printf("Enter RollNumber 0f Student%d:",i);
   scanf("%d",&s[i].RollNumber);
   fgetc(stdin);
   printf("Enter Name 0f Student%d:",i);
   fgets(s[i].Name,50,stdin);
   s[i].Name[strlen(s[i].Name)-1]=0;
   printf("Enter Marks 0f Student%d:",i);
   scanf("%f",&s[i].Marks);
  }
  for (i=0;i<2;i++)
   {
     printf("%d\n",s[i].RollNumber);
   printf("%s\n",s[i].Name);
   printf("%f\n",s[i].Marks);
    } 
}
