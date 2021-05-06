#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void func(int (*fp)(int, int));
int sum(int a, int b);
int mul(int a, int b);
int max(int a, int b);

int main() 
{
	int sel;
	printf("----------------------------------\n");
	printf("1. 두 정수의 합\n");
	printf("2. 두 정수의 곱\n");
	printf("3. 두 정수 중에서 큰 값 계산\n");
	printf("----------------------------------\n");
	printf("원하는 연산을 선택하세요 : ");
	scanf("%d", &sel);

	switch (sel) 
	{
		case 1: func(sum); break;  // 1이면 func에 덧셈 기능 추가
		case 2: func(mul); break;  // 2이면 func에 곱셈 기능 추가
		case 3: func(max); break;  // 3이면 func에 큰 값 구하는 기능 추가
		default: printf("1, 2, 3중에 하나를 선택해주세요");
	}

	return 0;
}

void func(int (*fp)(int, int)) 
{
	int a, b;
	int res;

	printf("두 정수의 값을 입력하세요 : ");
	scanf("%d%d", &a, &b);				    // 두 정수 입력
	res = fp(a, b);						    // 함수 포인터로 가리키는 함수를 호출
	printf("결과값은 : %d\n", res);
}

int sum(int a, int b)						// 덧셈 함수
{
	return (a + b);
}

int mul(int a, int b)					    // 곱셈 함수
{
	return (a * b);
}

int max(int a, int b) 
{
	if (a > b) return a;
	else return b;
}