/*
Calculator_v1 .c

Created : 2021-04-28
Author : 서동우

1. 두 값을 입력받는다.
2. 사칙연산을 수행한다.
3. 연산 결과를 출력한다.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int FirNum, SecNum = 0;
	printf("----------------------------------\n");
	printf("Calculator_v1\n");
	printf("Created : 2021-04-28\n");
	printf("Author : 서동우\n");
	printf("----------------------------------\n");

	printf("두 개의 정수를 입력하세요 : ");
	scanf("%d %d", &FirNum, &SecNum);

	int sum = FirNum + SecNum;
	int sub = FirNum - SecNum;
	int mul = FirNum * SecNum;
	double div = (double)FirNum / (double)SecNum;

	printf("FirNum + SecNum = %d\n", sum);
	printf("FirNum - SecNum = %d\n", sub);
	printf("FirNum * SecNum = %d\n", mul);
	printf("FirNum / SecNum = %.2lf\n", div);

	return 0;
}


