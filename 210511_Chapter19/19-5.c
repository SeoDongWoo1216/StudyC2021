/*
매크로 연산자 #과 ##
#은 매크로함수의 인수를 문자열로 치환하고
##은 두 인수를 붙여서 치환한다.
*/

// #과 ##을 사용한 매크로 함수
#include <stdio.h>
#define PRINT_EXPR(x) printf(#x " = %d\n", x)
#define NAME_CAT(x,y) (x ## y)

int main() 
{
	int a1, a2;

	NAME_CAT(a, 1) = 10;   // (a1) = 10;
	NAME_CAT(a, 2) = 20;   // (a2) = 20;
	PRINT_EXPR(a1 + a2);   // printf("a1 + a2" " = %d\n", a1 + a2);
	PRINT_EXPR(a2 - a1);   // printf("a2 - a1" " = %d\n", a2 - a1);

	return 0;
}