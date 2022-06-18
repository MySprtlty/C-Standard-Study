#include <stdio.h>

void bubble_sort(int array[], int size)
{
    int temp;
    for(int i=0;i<size-1;i++)
    {
        for(int j=1;j<size-i;j++)
        {
            if(array[j-1]>array[j])
            {
                temp=array[j];
                array[j]=array[j-1];
                array[j-1]=temp;
            }
        }
    }
}
