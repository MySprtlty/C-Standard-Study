#include <stdio.h>

/*internal linkage*/
static int si;

/*external linkage*/
int ei;

/*연결 없는 명칭은 같은 스코프에서 재선언 될 수 없다.*/

/*no linkage*/
typedef int ti;
// typedef double ti;
// extern int ti;

/*external linkage*/
extern int tdsi = 10;

int main(void)
{
	/*연결 없는 명칭은 같은 스코프 내에서 재선언 될 수 없다.*/

	/*no linkage*/
	int nl;
//	extern int nl;


	/*연결이 있는 명칭은 같은 스코프 내에서 재선언이 가능하다.*/

	/*internal linkage*/
	extern int si;
	extern int si;


	/*연결이 있는 명칭은 같은 스코프 내에서 재선언이 가능하다.*/

	/*external linkage*/
	extern int ei;
	extern int ei;


	/*다른 스코프(block)에서 재선언*/

	/*no linkage*/
	typedef double ti;


	/*다른 스코프에서 재선언*/

	/*no linkage*/
	typedef double tdsi;
	{
		/*tdsi는 typedef name이다.*/
		tdsi pi = 3.14;
		printf("%f\n", pi); // 3.14 출력

		/*tdsi는 external linkage를 갖도록 재선언 된다.*/
		extern int tdsi;
		printf("%d\n", tdsi); // 10 출력
	}

	return 0;
}

/*연결이 있는 명칭은 같은 스코프 내에서 재선언이 가능하다.*/
/*연결을 물려 받는다.*/

/*internal linkage*/
extern int si;

/*external linkage*/
extern int ei;