#include <stdio.h>
#include <stdlib.h>

char func(void);
void process(char);

int main()
{
    char c;
#if 0
    do{
            process(c =func());
    }while(c != '\n');
#endif

    while (process(c = func()), c != '\n');

    printf("end of main");
    return 0;
}

char func(void)
{
    static char org[] = {'h','e','l','l','o','\n','b','y','e','\0'}, *str = org;
    return *str++;
}

void process(char c)
{
    printf("process function is called: %c\n", c);
    return;
}
