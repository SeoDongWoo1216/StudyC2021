// 삼항연산자
// res = (a > b) ? a : b  
// a > b가 참이면 res = a, 거짓이면 res = b 

#include <stdio.h>

int main() 
{
	int a = 10, b = 20, res;

	res = (a > b) ? a : b;       // a와 b 중에 큰 값이 res에 저장
	printf("큰 값 : %d\n", res);

	return 0;
}