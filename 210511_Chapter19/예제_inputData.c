#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void input_data(int *pn1, int *pn2)  // 주소값을 인수로줬기때문에 받을때는 포인터로 받음
{
	printf("두 정수 입력 : $");
	scanf("%d %d", pn1, pn2);   // 반환값이 무시됬다는 초록줄은 scanf를 변수로 받으면 없어진다.
}
