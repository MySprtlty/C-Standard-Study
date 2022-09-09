#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct foo{int x,y;};
    struct bar{
        int data;
        struct foo graph;
        char cmt[20];
    } object =
    {1997,{9,18},"Hello World!"};

    printf("%d\n", object.data);
    printf("%d\n", object.graph.x);
    printf("%d\n", object.graph.y);
    printf("%s\n", object.cmt);

    return 0;
}
