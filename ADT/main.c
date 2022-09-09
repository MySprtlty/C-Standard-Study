#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    typedef short int *sh;

    printf("%d\n",sizeof(short int)); // 2
    printf("%d\n",sizeof(int *)); // 8

    short int *ps = malloc(sizeof(sh));
    printf("%d", sizeof(sh));
    return 0;
}
