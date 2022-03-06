#include <stdio.h>

int main(void)
{
	int i = 13;
	int *pi = &i;
	int **ppi = &pi;

	/*type conversion: pointer to pointer to int -> pointer const pointer to const int*/
	const int *const *pcpci = ppi;
	/*dialog message(warning): incompatible pointer type*/
	return 0;
}