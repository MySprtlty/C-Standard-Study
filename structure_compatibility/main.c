#include <stdio.h>
#include <stdlib.h>



int main()
{
    struct foo *pf;

    struct foo
    {
        int a;
    };

    struct foo object2 = {13};
    pf = &object2;
    printf("%d", pf->a);
    return 0;
}
