#include <stdio.h>
#include <stdlib.h>

typedef struct stack_t
{
    char a;
    int stack[1];
} *stack_t;

int main()
{
    int size = 10;
    stack_t object = malloc(sizeof(struct stack_t)+sizeof(int)*size-1);
    object->stack[5]=2;
    printf("%d\n",object->stack[5]);

    printf("-------\n");
    printf("sizeof(struct stack_t): %d, mallocsize: %d\n",sizeof(struct stack_t), sizeof(struct stack_t)+sizeof(int)*size-1);
    printf("sizeof(object->stack):%d\n",sizeof(object->stack));
    free(object);
    return 0;
}
