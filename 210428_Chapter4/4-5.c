// 관계연산자
// 컴퓨터는 0말고 전부 참으로 생각함
// -1, 100억, 1 모두 참(참이 1이라는건 편의상으로 말함)

// a >= b  이항연산자(항이 2개)
// a++  는 단항연산자

// a >= b 에서 a는 피연산자
// >=는크거나 같다.로 기억하자.('같다'가 무조건 뒤에와야함)

#include <stdio.h>
int main() 
{
	int a = 10, b = 20, c = 10;
	int res;  // 결과값 저장할 변수
	          // 각각 a와 b, c 대입예정

	res = (a > b);					// 10 > 20은 거짓(0)
	printf("a >  b : %d\n", res);

	res = (a >= b);					// 10 >= 20은 거짓(0)
	printf("a >= b : %d\n", res);

	res = (a < b);					// 10 < 20은 참(1)
	printf("a <  b : %d\n", res);

	res = (a <= b);					// 10 <= 20은 참(1)
	printf("a <= b : %d\n", res);

	res = (a <= c);					// 10 <= 20은 참(1)
	printf("a <= c : %d\n", res);

	res = (a == b);					// 10 == 20은 거짓(0)
	printf("a == b : %d\n", res);

	res = (a != c);					// 10 != 10은 거짓(0)
	printf("a != c : %d\n", res);

	return 0;
}