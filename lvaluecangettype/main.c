#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int ci = 100, *pci = &ci;
    printf("%d", *pci);

    return 0;
}
