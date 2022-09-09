#include <stdio.h>
#include <stdlib.h>
struct foo
{
    short int si;
    char s[10];
};

void swap(struct foo *, struct foo*);



int main()
{


    struct foo a={10, "123456789"},b={-10,"987654321"};
    swap(&a, &b);

    printf("%d, %s\n", b.si, b.s);
    printf("%d, %s\n", a.si, a.s);

    return 0;
}

void swap(struct foo *a, struct foo *b)
{
    struct foo tmp;
    tmp.si=(*a).si;
    (*a).si=(*b).si;
    (*b).si=tmp.si;

    for(int i =0; i<10;i++)
    {
        tmp.s[i]=(*a).s[i];
    }
        for(int i =0; i<10;i++)
    {
        (*a).s[i]=(*b).s[i];
    }
        for(int i =0; i<10;i++)
    {
        (*b).s[i]=tmp.s[i];
    }
    return;
}
