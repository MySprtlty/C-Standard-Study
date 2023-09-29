#include <stdio.h>
#include <stdlib.h>

static int i1 =7903;
extern int i1;

int i2=8002;
extern int i2;
int i2;

static int i4;
extern int i4;
int i4;
int main(void)
{
    printf("Hello world!\n");
    return 0;
}
