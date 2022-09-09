#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    struct foo
    {
        char s[10];
    }object={"abcdefghi"};

    printf("%c\n%c\n",object.s[4], *((char *)&object+4));

    return 0;
}
