#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    unsigned int a = 7903, b= 8002;


    if ((a - b) > 0)
    {
        printf("a - b evaluated result is unsigned int.\n");
    }

    if(-a > 0)
    {
        printf("-a evaluated result type is unsigned int.");
    }
    return 0;
}
