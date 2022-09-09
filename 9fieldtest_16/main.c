#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    unsigned long int li=1;
    unsigned char *s= (unsigned char *)&li;
    if(*s==1)
        printf("little-endian\n");
    else if(*(s+sizeof(unsigned long int)-1)==1)
        printf("big-endian\n");
    else
        printf("unknown-endian\n");
    return 0;
}
