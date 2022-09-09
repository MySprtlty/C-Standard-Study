#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a = 100, *p = &a;
    *p = 200;
    printf("%d", a);

    return 0;
}
