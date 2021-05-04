/*  지역 변수
지역 변수는 사용 범위가 블록 내부로 제한되므로 다른 함수에서는 사용할 수 없다.
=> 이럴때 포인터를 사용
*/

#include <stdio.h>

void assign(void);

int main() 
{
	auto int a = 0;					    // 지역 변수 선언과 초기화, auto는 생략 가능

	assign();							// 함수 호출
	printf("main 함수 : %d\n", a);

	return 0;
}

void assign(void)
{
	int a;								// main 함수에 있는 변수와 같은 이름의 지역 변수, auto 생략

	a = 10;							    // assign 함수 안에 선언된 a에 대입 
	printf("assign 함수 a : %d\n", a);  // assign 함수에 선언된 a 값 출력
}