#include <stdio.h>

void swap(int **a, int **b)
{
	int *t;

	t = *a;
	*a = *b;
	*b = t;
}

int main(void)
{
	int i = 8002;
	int j = 7903;
	int *pi = &i;
	int *pj = &j;

	printf("%d %d %d %d\n", *pi, *pj, i, j);
	swap(&pi, &pj);
	printf("%d %d %d %d\n", *pi, *pj, i, j);
	return 0;
}