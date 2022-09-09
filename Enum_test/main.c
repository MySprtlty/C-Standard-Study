#include <stdio.h>
#include <stdlib.h>
#include <limits.h>



int main(void)
{
    char arr[2][6]={"Hello, there"};

    for(int i =0;i<2;i++)
    {
        for(int j=0;j<6;j++)
        {
            printf("%c ",arr[i][j]);
        }
    }

    return 0;
}
