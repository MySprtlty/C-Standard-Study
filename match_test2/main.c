#include <stdio.h>

typedef int stack_t;
#define STACK_SIZE 30

/*external linkage function*/
extern stack_t *create(int size);
extern void destroy(stack_t *s);
extern void push(stack_t stack[], int *top, int size, stack_t data);
extern stack_t pop(stack_t stack[], int *top);
extern int isEmpty(stack_t stack[], int *top);

/*file scope object*/
stack_t *stack;
int top;

int match_test(char *s)
{
    /*매개변수의 첫번째 문자를 저장*/
    int c = *s;

    if(c == '\0') // NUL문자인 경우 (문자열의 끝)
    {
        return 1;
    }
    else // 일반 문자인 경우
    {
        switch(c)
        {
        case '(':
        case '{':
        case '[':
            push(stack, &top, STACK_SIZE, c);
            break;
        case ')':
        case '}':
        case ']':
        	if(isEmpty(stack, &top))
        	{
				return 0;
			}
            switch(pop(stack, &top))
            {
            case '(':
                if(c==')')
                    break;
            case '{':
                if(c == '}')
                    break;
            case '[':
                if(c== ']')
                    break;
            default:
                return 0;
            }
            break;
        }

        return (match_test(s+1));

    }



}


int main(void)
{
    char *s= "(6+12*(3-x)/sin[y-(x-y){x}])";
    /*create a stack*/
    stack = create(STACK_SIZE);
    top = 0;


    printf("%d\n", match_test(s));
    destroy(stack);

    return 0;
}


