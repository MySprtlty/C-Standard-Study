# if 0
#include <stdio.h>

struct foo
{
    int i, j;
};

void f(int a(struct foo{int i, j;}))
{
    struct foo temp = {1,3};
    printf("called\n");
    a(temp);
}
#endif
