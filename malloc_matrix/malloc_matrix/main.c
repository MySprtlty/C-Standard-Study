#include <stdio.h>
#include <stdlib.h>

#define ROW_MAX 10
#define COL_MAX 5

void *my_malloc(int size);

int main()
{
    /*a is a pointer to array of array of int*/
    int (*a)[ROW_MAX][COL_MAX];

    a = my_malloc(sizeof(int)*ROW_MAX*COL_MAX);

    for(int i = 0;i<ROW_MAX;i++)
    {
        for(int j=0;j<COL_MAX;j++)
        {
            (*a)[i][j] = i*COL_MAX+j;

        }
    }

    for(int i = 0;i<ROW_MAX;i++)
    {
        for(int j=0;j<COL_MAX;j++)
        {
            printf("%d\n", (*a)[i][j]);

        }
    }
    free(a);
    return 0;
}

void *my_malloc(int size)
{
    void *tmp;
    tmp = malloc(size);
    if(tmp == NULL)
    {
        exit(1);
    }
    return tmp;
}
