#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    /*array of 2 array of 3 int*/
    int ai[2][3] =
    {
        {1,2,3},
        {4,5,6}
    };

    /*array of 2 array of 3 int -> pointer to array of 3 int decay*/
    /*ai -> &ai[0]*/
    printf("ai: %p\n", ai);

    /*pointer to array of 3 int*/
    printf("&ai[0]: %p\n", &ai[0]);

    /*pointer to array of 2 array of 3 int*/
    printf("&ai: %p\n", &ai);

    /*array of 3 int -> pointer to 3 int decay*/
    /*ai[0] -> &ai[0][0]*/
    printf("ai[0]: %p\n", ai[0]);

    /*pointer to int*/
    printf("&ai[0][0]: %p\n", &ai[0][0]);

    return 0;
}
