#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[]="Hello";
    char *pstr="Hello";

    printf("%d\n", sizeof(str));
    printf("%d\n", sizeof(*pstr));
    return 0;
}
