#include <stdio.h>
#include <stdlib.h>



int main()
{

    struct foo{int a; int b;};
    {
        struct foo // diff scope & same identifier -> incompatible
        {
            int data;
            struct foo *next;
        };
        struct foo test, nsn;
        nsn.data = -10;
        test.data=10;
        test.next=&nsn;
        printf("%d", test.next->data);
    }

    return 0;
}
