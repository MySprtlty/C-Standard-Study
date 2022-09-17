#include <stdio.h>
#include <stdlib.h>


/*short int' size is 2 byte*/

int main()
{
    signed char sc= -32;
    unsigned char uc = 32;
    unsigned short int us = (unsigned int)-uc;


    printf("%d, %d\n",sc,uc);
    printf("%d\n",us);

    return 0;
}
