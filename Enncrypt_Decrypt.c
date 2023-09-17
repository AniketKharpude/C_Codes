#include <stdio.h>
#include <string.h>

void main()
{
    char str[50];
    int i;
    char Encrypted__str[50];
    fgets(str, 50, stdin);
    str[strlen(str) - 1] = 0;
    int key;
    key = (2 * 4 / 2 * 2);
    for (i = 0; i < 50 && str[i] != '\0'; i++)
    {
        str[i] = str[i] + key;
    }
    puts(str);
    for (i = 0; i < 50 && str[i] != '\0'; i++)
    {
        str[i] = str[i] - key;
    }
    puts(str);
}
