#include <stdio.h>

void func(void)
{
    int object = 0; // auto object

    printf("%d\n", object);

    object = 10;
}

int main(void) {
    int i;
    for (i = 0;i<10;i++)
    {
        func();
    }
    return 0;
}
