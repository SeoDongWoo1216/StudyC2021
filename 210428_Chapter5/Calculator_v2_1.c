// 연산기호를 입력받으면 그거에따른 결과값 출력
// v2버전에서 반복사용하기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int firNum = 0;
	int secNum = 0;
	char cal = '+';
	int repeatNum = 1;

	while (repeatNum)
	{
		printf("----------------------------------\n");
		printf("Calculator_v2\n");
		printf("Created : 2021-04-28\n");
		printf("Author : 서동우\n");
		printf("----------------------------------\n");
		printf("두 정수를 입력하세요 : ");
		scanf("%d %d", &firNum, &secNum);
		printf("연산기호를 입력하세요(+,-,*,/) : ");
		scanf(" %c", &cal);
		printf("----------------------------------\n");

		switch (cal)
		{
		case '+':
			printf("%d + %d = %d\n", firNum, secNum, firNum + secNum);
			break;

		case '-':
			printf("%d - %d = %d\n", firNum, secNum, firNum - secNum);
			break;

		case '*':
			printf("%d * %d = %d\n", firNum, secNum, firNum * secNum);
			break;

		case '/':
			if (secNum == 0)
			{
				printf("0으로는 나눌 수 없습니다");
			}
			else
			{
				printf("%d / %d = %.2lf\n", firNum, secNum, (double)firNum / (double)secNum);
				printf("%d %% %d = %d\n", firNum, secNum, firNum % secNum);
			}
			break;

		default:
			printf("연산기호를 입력해주세요");
			break;
		}
		printf("\n");
		printf("\n");

		int inputNum;
		printf("반복하시겠습니까? (1:반복, 0:종료) : ");
		scanf("%d", &inputNum);
		if (inputNum == 1)
		{
			repeatNum == 1;
		}
		else if (inputNum == 0)
		{
			break; // exit(1) 로도 종료가능
		}
	}

	return 0;
}