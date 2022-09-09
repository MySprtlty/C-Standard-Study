#include <stdio.h>
#include <stdlib.h>


typedef struct foo
{
    int data;
    struct bar *next;
} *foo;

typedef struct bar
{
    int data;
    foo next;
} *bar;

int main()
{
    printf("Hello world!\n");
    return 0;
}
