// 2개의 함수로 만든 프로그램
#include<stdio.h>

int sum(int x, int y);    // sum 함수 선언

int main(void) {
	int a = 10, b = 20;
	int result;

	result = sum(a, b);    // 함수 호출
	printf("result : %d\n", result);

	return 0;
}

int sum(int x, int y)  // 함수 정의 시작
{
	int temp;
	temp = x + y;
	return temp;       // temp 값 반환
}