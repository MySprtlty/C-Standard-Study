#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /*위험한 코드로 추정*/
    int *pi = malloc(sizeof(*pi));

    if(!pi)
    {
        exit(1);
    }

    *pi = 100;

    printf("%d\n",*pi);

    free(pi);

    return 0;
}
