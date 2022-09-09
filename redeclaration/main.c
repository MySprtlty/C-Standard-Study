#include <stdio.h>
#include <stdlib.h>

int a;
extern int a; // typedef name is no-linkage.

int main()
{

    printf("Hello world!\n");
    return 0;
}
