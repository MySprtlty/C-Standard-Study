#include <stdio.h>

#define MAX_DEPTH (5+1)

void recursion(int data, int count)
{
    static const int input[MAX_DEPTH-1]={2,3,4,5,};

    count++;

    if(count == MAX_DEPTH) return;
    recursion(input[count-1], count);
    printf("%d\n", data);

}

int main(void)
{
    recursion(1, 0);
    recursion(1, 0);
    return 0;
}
