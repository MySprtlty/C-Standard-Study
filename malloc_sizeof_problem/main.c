#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /*������ �ڵ�� ����*/
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
