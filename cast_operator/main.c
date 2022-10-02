#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i = 10;
    printf("i: %d\n", i);

    *((const int *)&i) = 20;
    printf("i: %d\n", i);

    return 0;
}
