#include <stdio.h>
#include <string.h>
void main()
{
    FILE *fp = NULL;
    char ch[25];
    fp = fopen("fseek.txt", "r");
    printf("%d\n", ftell(fp));
    fscanf(fp, "%s", ch);
    printf("%s\n", ch);
    printf("%d\n", ftell(fp));
    rewind(fp);
    fseek(fp, 7, SEEK_SET);
    fscanf(fp, "%s", ch);
    printf("%s\n", ch);
    printf("%d\n", ftell(fp));
    fseek(fp, 0, SEEK_END);
    printf("%d\n", ftell(fp));
    fclose(fp);
}