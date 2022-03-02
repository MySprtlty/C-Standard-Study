/*20220303*/
/*null pointer constant와 포인터 문맥의 상관관계*/
#include <stdio.h>

int main(void)
{
	/*포인터 문맥이 아니다.*/
	/*그러나 (void *)가 포인터 문맥으로 만든다.*/
	/*따라서 0은 널 포인터 상수가 된다.*/
	/*(void *)0은 pointer to void 타입의 널 포인터가 된다.*/
	/*void *타입을 cast operator없이 int로 변환하면 정의되지 않는다.*/
	/*initialization of 'int' from 'void *' makes integer from pointer without a cast*/
	int a = (void *)0;

	/*포인터 문맥이 아니다.*/
	/*0은 int형 정수 상수 0이다.*/
	int b = 0;

	/*포인터 문맥이다.*/
	/*(void *)0과 0이 모두 널 포인터 상수가 된다.*/
	int *c = (void *)0, *d = 0;


	/*처음에는 포인터 문맥이 아니다.*/
	/*그러나 (int *)가 포인터 문맥으로 만든다.*/
	/*따라서 각각 0과 (void *)0은 널 포인터 상수가 된다.*/
	/*널 포인터 상수에 int * cast operator가 적용되어 최종적으로 int *형 널 포인터가 된다.*/
	/*initialization of 'int' from 'int *' makes integer from pointer without a cast*/
	int e = (int *)0;
	int f = (int *)(void *)0;

	return 0;
}