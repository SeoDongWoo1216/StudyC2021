/*
Calculator_v1 .c

Created : 2021-04-28
Author : ������

1. �� ���� �Է¹޴´�.
2. ��Ģ������ �����Ѵ�.
3. ���� ����� ����Ѵ�.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int FirNum, SecNum = 0;
	printf("----------------------------------\n");
	printf("Calculator_v1\n");
	printf("Created : 2021-04-28\n");
	printf("Author : ������\n");
	printf("----------------------------------\n");

	printf("�� ���� ������ �Է��ϼ��� : ");
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


