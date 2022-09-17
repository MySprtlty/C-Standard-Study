#include <stdio.h>
#include <limits.h>

int main(void)
{
    struct foo
    {
        unsigned int a:2;
    };

    struct foo x;
    x.a = -1;
    int res = x.a & 0x3;
    printf("%d", res);

    return 0;
}
