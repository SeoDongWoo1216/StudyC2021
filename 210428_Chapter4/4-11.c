/*
연산자 우선순위

*/

#include <stdio.h>

int main() {
	int a = 10, b = 20;
	int res;

	res = (++a, ++b);  // 실무에서 쓸일없는 코드
					   // , 도 연산자라는점, 이런 코드가 있다는 점만 기억

	printf("a:%d\n", a);
	printf("b:%d\n", b);
	printf("res:%d\n", res);  // b를 출력

	return 0;
}