/*
#define을 사용한 매크로 함수
매크로함수는 인수에 따라 서로 다른 결과값을 갖도록 치환된다.
함수는 아니지만 인수를주고 함수처럼 쓸 수 있다.

#define 매크로_함수명(인수) 치환될부분
*/

// 매크로 함수를 사용한 프로그램
#include<stdio.h>
#define SUM(a,b) ((a) + (b)) // 최대한 괄호를써서 부작용을 줄여야함
#define MUL(a,b) ((a) * (b))
#define test(a) (a*10)

int main() 
{
	int a = 10, b = 20;
	int x = 30, y = 40;
	int res;

	printf("a + b = %d\n", SUM(a, b));  // a + b
	printf("x + y = %d\n", SUM(x, y));  // x + y
	res = 30 / MUL(2, 5);               // 30을 2*5로 나눔
	printf("res : %d\n", res);

	printf("%d\n", test(10));
	printf("%d\n", test( (a+10) ));  // 200을 의도했는데 define에 괄호를안붙이면 110이 나올수도있음
	return 0;
}