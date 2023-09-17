#include <stdio.h>
void main()
{
    FILE *fp = NULL;
    fp = fopen("Aniket1.txt", "r+");
    char ch;
    int count = 1;
    while ((ch = fgetc(fp)) != EOF)
    {
        if (ch == '\n')
        {
            count++;
        }
    }
    printf("The Number Of Lines In Above File is %d\n",count);
    printf("%d\n",ftell(fp));
    fclose(fp);
}