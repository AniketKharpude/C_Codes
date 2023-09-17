#include <stdio.h>
#include <string.h>
void main()
{
    FILE *fp1, *fp2;
    fp1 = fopen("Aniket1.txt", "r");
    fp2 = fopen("fseek1.txt", "a");
    char ch;
    while ((ch=fgetc(fp1)) != EOF)
    {
        fputc(ch, fp2);
    }
    fclose(fp1);
    fclose(fp2);
    printf("File Copied Successfully...\n");
}