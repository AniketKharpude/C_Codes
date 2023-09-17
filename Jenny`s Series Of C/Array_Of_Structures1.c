#include<stdio.h>
#include<string.h>
 struct Student
{int RollNumber;
 char Name;
 float Marks;
};
void main()
{
  struct Student s[2];
 int i;
 for (i=0;i<2;i++)
 {
   scanf("%d%s%f",&s[i].RollNumber,s[i].Name,&s[i].Marks);
  }
  for (i=0;i<2;i++)
   {
  printf("%d%s%f",&s[i].RollNumber,s[i].Name,&s[i].Marks);
    }
}
