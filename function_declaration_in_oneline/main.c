#include <stdio.h>
#include <stdlib.h>

int func1(void), func2(void);

int main(void)
{
    int a = func1()+func2();
    printf("%d\n", a);
    return 0;
}

int func1(void)
{
    return 1;
};

int func2(void)
{
    return 2;
};
