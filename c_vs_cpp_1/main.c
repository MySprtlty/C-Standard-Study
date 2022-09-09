#include <stdio.h>
#include <stdlib.h>

char c;

int main(void)
{
    struct c
    {
        int arr[10];
    };

    size_t size = sizeof(c);

    printf("C%s\n", (size == 1) ? "" : "++");


    return 0;
}
