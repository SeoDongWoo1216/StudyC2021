// 입력이 있는 함수
#include<stdio.h>

void func(int, int );  // 함수 원형(변수 명은 생략해도됨)

int main() 
{
	int a, b;
	a = 10, b = 20;

	func(a, b);     // 입력이 있는 함수 호출
	return 0;
}

void func(int aa, int bb)  // 함수 선언 변수명은 꼭 기재해줘야한다
{
	int res;
	res = aa + bb;
	printf("res : %d\n", res);
}

