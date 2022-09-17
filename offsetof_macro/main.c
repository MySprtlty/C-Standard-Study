#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

int main(void)
{
    struct foo
    {
        int a;
        char b;
        double c;
    };

    printf("%d", offsetof(struct foo, b));

    return 0;
}
