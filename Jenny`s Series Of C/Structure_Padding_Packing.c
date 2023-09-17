#include <stdio.h>
#include <string.h>
_Pragma pack(ss);

struct student
{
    char a;
    int b;
    char c;
};
void main()
{
    struct student ss;
    printf("%ld\n", sizeof(ss));
}
