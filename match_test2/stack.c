#include <stdio.h>
#include <stdlib.h>

typedef int stack_t;

stack_t *create(int size)
{
    stack_t *temp;

    temp=malloc(size*sizeof(stack_t));
    if(temp==NULL)
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

int isEmpty(stack_t stack[], int *top)
{
    if(*top == 0)
		return 1;
	else
		return 0;
}

void push(stack_t stack[], int *top, int size, stack_t data)
{
    printf("%c is pushed\n", data);
    if(*top == size)
    {
        puts("Stack overflow.");
        exit(EXIT_FAILURE);
    }
    stack[*top] = data; // ºñ´ëÄª °æ°è
    *top= *top + 1;
}

stack_t pop(stack_t stack[], int *top)
{
    if(*top==0)
    {
        puts("Stack overflow.");
        exit(EXIT_FAILURE);
    }
    *top = *top - 1;
	printf("%c is popped!\n", stack[*top]);

    return stack[*top];
}
