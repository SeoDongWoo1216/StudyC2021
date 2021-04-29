#include<stdio.h>

// 함수는 계속 호출하는데 또 메인함수에서 또 호출하기때문에 무한반복이 된다.
// 이때, 종료시키는 조건인 기저조건이 필요하다.
void fruit(void);  // 함수 선언

int main()         // 함수 호출
{
	fruit();

	return 0;
}

void fruit(void) { // 재귀호출함수 정의
	printf("apple\n");
	fruit();       // 자신을 다시 호출
}