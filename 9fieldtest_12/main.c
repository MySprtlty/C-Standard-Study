#include <stdio.h>
#include <stdlib.h>

struct foo
{
    int i, j;
};

void f(int a(struct foo{int i, j;}))
{
    printf("called\n");
}

int bar(struct foo k)
{
    printf("bar is called");
    return 0;
}

int main()
{
    f(bar);
    printf("Hello world!\n");
    return 0;
}
