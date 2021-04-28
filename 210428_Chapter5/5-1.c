// if문
// if(조건식){실행문}  // 조건식이 참이면 실행문이 실행된다.

#include <stdio.h>
int main() 
{
	int a = 20;
	int b = 0;

	if (a > 10)  // 조건식 : a가 10보다 크므로 조건식은 참
		b = a;   // 실행문 : b = a 대입문 수행
	printf("a : %d, b : %d\n", a, b);  // 대입문 수행하면 두 값은 같음

	return 0;
}