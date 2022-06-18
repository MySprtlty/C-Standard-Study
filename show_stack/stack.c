#include <stdio.h>
#include <stdlib.h>

typedef int stack_t;

stack_t *create(int size)
{
    stack_t *temp;

    temp = malloc(size*sizeof(stack_t));
    if(temp ==NULL)
    {
        puts("Memory allocation failed.");
        exit(EXIT_FAILURE);
    }
    return temp;
}

void destroy(stack_t *s)
{
    free(s);
}

void push(stack_t stack[], int *top, int size, stack_t data)
{
    if(*top==size)
    {
        puts("Stack overflow");
        exit(EXIT_FAILURE);
    }

    stack[*top]=data;
    *top=*top+1;
}

stack_t pop(stack_t stack[], int *top)
{
    if(*top==0)
    {
        puts("Stack underflow");
        exit(EXIT_FAILURE);
    }
    *top=*top-1;
    return stack[*top];
}

void show_stack(stack_t *stack, int *top, int (*func)())
{
    for(int i=0; i<*top; i++)
    {
        func("%d ", stack[i]);
    }
}


