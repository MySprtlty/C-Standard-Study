#include <stdio.h>
#include <stdlib.h>

int main()
{
    {
        struct foo msn;
        struct foo
        {
            int a;
            int b;
        };
        msn a={1,2};
        printf("%d, %d", a.a, a.b);
    }
    return 0;
}
