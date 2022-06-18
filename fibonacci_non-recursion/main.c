#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 20

int fibonacci(int n)
{
    /*n < 3*/
    if(n == 1| n == 2)
        return 1;

    /*n >= 3*/
    int res_list[ARRAY_SIZE] ={1,1,}; // a[0] = 1, a[1] = 1;

    for(int i = 2; i < n; i++)
    {
        res_list[i]=res_list[i-1]+res_list[i-2];
    }
    return res_list[n-1];
}

int main()
{
    printf("%d\n", fibonacci(3));
    printf("%d\n", fibonacci(6));
    printf("%d\n", fibonacci(7));

    return 0;
}
