#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void *mem1, const void *mem2)
{
    const char *pos1, *pos2;
    const char *alpha="AaBbCcDdEeFfGgHhIiJjKkLlMmNnOo"
                        "PpQqRrSsTtUuVvWwXxYyZz";

    pos1=strchr(alpha,*((char *)mem1));
    pos2=strchr(alpha,*((char *)mem2));

    if(pos1 == NULL | pos2 == NULL) return 0;

    return pos2-pos1;
}


int main()
{
    char test[]="TheQuickBrownFoxJumpOverTheLazyDog";

    puts(test);
    qsort(test,sizeof(test)-1,sizeof(char),compare);
    puts(test);
    return 0;
}
