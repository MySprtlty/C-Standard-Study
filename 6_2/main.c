#include <stdio.h>

int foo = 7903;

void func(void)
{
	printf("file scope: %d\n", foo);
}

int main(void)
{
	int foo = 8002;
	func();
	printf("outer block scope: %d\n", foo);
	
	{
		double foo = 3.14159;
		printf("inner block scope: %f\n", foo);
	}
	printf("outer block scope: %d\n", foo);
	return 0;
}