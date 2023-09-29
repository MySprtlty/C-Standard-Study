#include <stdio.h>

int main(void)
{
    /*NULL Macro is same as Null Pointer Constant 0.*/
    int *pi = NULL;
    if(pi == (int *)(void *)0)
    {
        printf("Null Pointer Constant\n");
    }
    return 0;
}
