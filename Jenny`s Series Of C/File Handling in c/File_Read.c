#include <stdio.h>
#include <string.h>
void main()
{
    FILE *fp;
    char str[500];
    fp = fopen("Aniket.txt", "r");
    while (!feof(fp))
    {
        fgets(str,500,fp);
        printf("%s", str);
    }
    fclose(fp);
}