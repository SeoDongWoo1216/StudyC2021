#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() 
{
	int firNum, secNum = 0;
	char cal[1] = {'+'};

	while (1)
	{
		printf("----------------------------------\n");
		printf("Calculator_v3\n");
		printf("Created : 2021-04-29\n");
		printf("Author : 서동우\n");
		printf("----------------------------------\n");
		printf("두 숫자 입력 : ");
		scanf("%d %d", &firNum, &secNum);

	
		printf("연산할 기호 입력(+,-,*,/) : ");
		scanf("%s", &cal);

		switch (cal[0])
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
				printf("%d / %d = %.2lf\n", firNum, secNum, (double)firNum / (double)secNum);
				break;
			default:
				printf("사칙연산 기호만 입력해주세요\n\n\n");
				break;
		}
		printf("\n");

		
		char reStart[1] = { '0' };

		while (reStart[0]) 
		{
			printf("반복하시겠습니까? (r:또 계산, e:종료) : ");
			scanf("%s", reStart);

			if (reStart[0] == 'e' || reStart[0] == 'E')
			{
				printf("프로그램을 종료합니다\n");
				exit(1);
			}
			if (reStart[0] == 'r' || reStart[0] == 'R')
			{
				printf("다시 계산합니다.\n");
				break;
			}
			else
			{
				printf("r, e말고 다른 값을 입력하셨습니다. 다시입력하세요.\n");
			}
			printf("\n");
		}

	}

	return 0;
}