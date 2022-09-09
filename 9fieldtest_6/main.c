#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct foo
    {
        int member;
    }a[10];

    a[2].member = 100;

    printf("%d\n", (*(a+2)).member);
    printf("%d\n", (a+2)->member);

    return 0;
}
