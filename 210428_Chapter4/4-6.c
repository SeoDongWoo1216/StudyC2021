/* 논리연산자
A && B : A, B 둘다 참일때 참
A || B : A, B 둘 중 하나가 참일때 참

&, | 는 비트연산자이다.
A & B : A, B를 &연산해라.
A | B : A, B를 |연산해라.


*/

#include<stdio.h>
int main() 
{
	int a = 30;
	int res;

	res = (a > 10) && (a < 20);      // 좌항과 우항 모두 참이면 참
	printf("(a > 10) && (a < 20) : %d\n", res);

	res = (a < 10) || (a > 20);      // 좌항과 우항 중 하나라도 참이면 참
	printf("(a < 10) || (a > 20) : %d\n", res);

	res = !(a >= 30);                // 거짓이면 참, 참이면 거짓으로
	printf("!(a >= 30) : %d\n", res);

	return 0;
}