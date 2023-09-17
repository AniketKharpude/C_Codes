#include <stdio.h>
#include <string.h>
void main()
{
    FILE *fp;
    char ch;
    fp = fopen("fseek.txt", "r");
    fseek(fp, 0, SEEK_END);
    ch = fgetc(fp);
    printf("%c\n",ch);
    rewind(fp);
}
