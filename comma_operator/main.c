#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int y = 0, x = 0, z = 0;

    y = (x = 10, z = 20);

    printf("%d", y);

    return 0;
}
