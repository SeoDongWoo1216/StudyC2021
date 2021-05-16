#include <stdio.h>

int main() 
{
	// 변수 선언
	int a = 123456;
	double b = 12345678;
	char c = 'A';

	printf("int형 변수의 주소    : %p\n", &a);     // 주소 연산자로 주소계산
	printf("double형 변수의 주소 : %p\n", &b);  // %p로 주소를 출력할 수 있음.
	printf("char형 변수의 주소   : %p\n", &c);

	return 0;
}