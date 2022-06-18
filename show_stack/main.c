#include <stdio.h>
#include <stdlib.h>

#define STACK1_SIZE 10
#define STACK2_SIZE 5

typedef int stack_t;

stack_t *create(int size);
void destroy(stack_t *s);
void push(stack_t stack[], int *top, int size, stack_t data);
stack_t pop(stack_t stack[], int *top);
void show_stack(stack_t stack, int *top, int (*func)());

int main(void)
{
    stack_t *stack1, *stack2;
    int top1=0,top2=0;

    stack1 = create(STACK1_SIZE);
    stack2 = create(STACK2_SIZE);

    push(stack1, &top1, STACK1_SIZE, 3);
    push(stack1, &top1, STACK1_SIZE, 1);
    push(stack2, &top2, STACK1_SIZE, 4);
    push(stack2, &top2, STACK1_SIZE, 2);

    show_stack(stack1, &top1, printf);

    return 0;
}
