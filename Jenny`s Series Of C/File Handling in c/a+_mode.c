#include <stdio.h>
#include<string.h>
 void main()
 {
     FILE *fp;
     fp=fopen("Aniket1.txt","a+");
     char name[256];
     fputs("Chaitan Uddhav Aswar",fp);
     fgets(name,255,fp);
     fclose(fp);
     puts(name);
 }