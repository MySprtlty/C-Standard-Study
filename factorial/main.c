#include <stdio.h>

unsigned long factorial(unsigned long n)
{
    if(n==1) return 1;
    else return n*factorial(n-1);
}

int main(void)
{
    const unsigned long int n = 5;
    printf("%lu! = %lu\n", n, factorial(n));
    return 0;
}
