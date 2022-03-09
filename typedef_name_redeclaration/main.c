#include <stdio.h>
#include <stdlib.h>

int a[];
int a[10];

/*typedef name is a no linkage identifier*/
typedef int a[]; /*wrong*/
typedef int a[10]; /*wrong*/

int main()
{
    /*no linkage identifier can't be redeclared.*/
    /*An object with no linkage identifier can't have imcomplete types.*/
    int a[]; /*wrong*/
    int a[10]; /*wrong*/
    printf("Hello world!\n");
    return 0;
}
