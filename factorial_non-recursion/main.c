#include <stdio.h>
#include <stdlib.h>

unsigned long factorial(unsigned long n)
{
    int res=1;
    for(int i= n; i>1;i--)
    {
        res = res*i;
    }
    return res;
}

int main()
{
    const unsigned long n = 5;

    printf("%lu!=%lu!\n", n, factorial(n));
    return 0;
}
