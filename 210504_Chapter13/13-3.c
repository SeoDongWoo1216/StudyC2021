// 전역 변수(363p)
/*
함수 밖에 변수를 선언하면 전역변수가 된다.
전역변수는 특정 함수 블록에 포함되지 않으므로 사용 범위가 함수나 블록으로 제한되지 않는다.
데이터를 공유하는 경우에 제한적으로 사용하는것이 좋다.

문제점 
1. 
2. 
3.
*/
#include<stdio.h>

void assign10(void);
void assign20(void);

int a;										 // 전역변수는 컴파일러가 자동으로 0으로 초기화시켜준다

int main(void) 
{
	printf("함수 호출 전 a 값 : %d\n", a);   // 전역 변수 a 출력

	assign10();  
	assign20();

	printf("함수 호출 후 a 값 : %d\n", a);   // 전역 변수 a 출력

	return 0;
}

void assign10(void) 
{
	a = 10;									 // 전역 변수 a에 10 대입
}

void assign20(void) 
{
	int a;									 // 전역 변수와 같은 이름의 지역 변수 선언
	a = 20;									 // 지역 변수 a에 20 대입
}