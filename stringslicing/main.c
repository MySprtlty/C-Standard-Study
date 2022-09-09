#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    for(i = 0; i < sizeof("abcdefgh"); i++)
    {
        printf("%c\n", "abcdefgh"[i]);
    }
    return 0;
}
