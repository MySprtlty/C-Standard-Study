#include <stdio.h>

int main(void)
{
	/*0 is a null pointer constant*/
	int *p = 0;

	/*(void *)0 is a null pointer constant*/
	int *p2 = (void *)0;

	/*0 is a null pointer constant*/
	/*(int *)0 is pointer to int null pointer*/
	int *p3 = (int *)0;

	/*(void *)0 is a null pointer constant*/
	/*(int *)(int *)0 is pointer to int null pointer*/
	int *p4 = (int *)(void *)0;

	return 0;
}