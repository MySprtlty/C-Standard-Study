#include <stdio.h>
#include <stdlib.h>

#define MAX_ELEMENT 10

extern void bubble_sort(int [], int);

int main()
{
    int array[] = {10,5,4,2,11,6,7,33,1,15};
    bubble_sort(array, MAX_ELEMENT);
    for(int i=0;i<MAX_ELEMENT;i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}
