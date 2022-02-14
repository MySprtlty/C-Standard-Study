#include <stdio.h>

void count(void)
{
    static int object = 1;
    printf("%d\n",object);
    object++;
}

int main() {
    int i;

    for(i=0;i<10;i++)
    {
        count();
    }

    return 0;
}
