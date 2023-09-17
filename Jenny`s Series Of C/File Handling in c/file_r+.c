#include <stdio.h>
void main()
{
    FILE *fp;
    char ch;
    fp = fopen("Aniket1.txt", "r+");
   
    while (!feof(fp))
    {
        ch = fgetc(fp);
        putc(ch,stdout);
    }
     fputc('a', fp);
     printf("\n");
    fclose(fp);
}