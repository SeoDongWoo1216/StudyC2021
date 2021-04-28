#include <stdio.h>

int main() {
	int a = 1;                   // 변수 선언 후 1로 초기화
	int i;                       // 반복 횟수를 세기 위한 변수

	for (i = 0; i < 3; i++)      // i는 0으로 초기화 된 후에 3보다 작은동안
								 // 1씩 증가하면서 실행된다.
	{
		printf("%d\n", i);
		a = a * 2;
	}

	printf("\n%d\n", i);
	printf("a : %d\n", a);       // for문을 빠져나오면 a 값 출력

	return 0;
}