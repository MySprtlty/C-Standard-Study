#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *s = "Hello";

    printf("%p\n", s);
    while(*s++ != '\0');

    printf("%c\n", *s);
    printf("%p\n", s);
    return 0;
}
