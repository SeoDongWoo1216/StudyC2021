#include<stdio.h>

void Sum();   // 함수 원형 (선언)
int main()
{
	Sum();    // Sum 함수 호출
	return 0;
}

void Sum()    // 입력과 출력이 없는 함수
{
	int a = 10, b = 20;
	int res;

	res = a + b;
	printf("%d", res);
}