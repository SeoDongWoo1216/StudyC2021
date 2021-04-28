#include <stdio.h>

// a++ 후치연산 : a를 던져놓고 ++해줌
// ++a 전위연산 : a에 ++을 해주고 던져줌

int main() 
{
	int a = 10, b = 20;
	int c = 10, d = 20;
	// ++a;  // 변수의 값을 1만큼 증가 // 대입연산이 없어서 이 한줄에 계산이 끝남
	// --b;  // 변수의 값을 1만큼 감소


	printf("a : %d\n", a++);  // 후치연산 : a를 먼저 출력하고 ++해줌
	printf("b : %d\n", b--);
	printf("\n");

	printf("a : %d\n", a);
	printf("b : %d\n", b);
	printf("\n");

	printf("a : %d\n", ++c);  // 전위연산 : c에 ++을하고 출력함
	printf("b : %d\n", --d);
	printf("\n");

	return 0;
}