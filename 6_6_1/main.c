#include <stdio.h>

int main(void)
{
    int i;

    for(i=0; i<10; i++)
    {
        int object = 0; // auto object
        printf("%d\n", object);
        object = 7903;
    }

    return 0;
}
