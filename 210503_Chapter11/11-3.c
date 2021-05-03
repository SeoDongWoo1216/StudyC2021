// getchar와 putchar함수 사용
// 문자만 받고 출력하는 가벼운 함수를 만들겠다  일때 주로 사용
// ★★문자에 특화되어있는 함수이다.★★

#include<stdio.h>

int main() 
{
	int ch; 

	ch = getchar();              // scanf처럼 ch에 문자 하나를 입력받는 함수(실패하면 -1을 반환)
	printf("입력한 문자 : "); 
	putchar(ch);                 // 입력받은 ch를 출력
	putchar('\n');               // 그냥 개행용 putchar

	return 0;
}

/*
★★★★★★★
getchar를 받는 ch의 데이터타입이 int인 이유??
키보드입력값이 아스키코드 0~127 범위 내에있고, getchar가 문자 이외의 값도 반환하기 때문.
실패하면 -1를 반환하는데, 이것을 위해 int형으로 선언해주어야함.
★★★★★★★

*/