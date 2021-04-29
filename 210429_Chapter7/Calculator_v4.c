#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int Sum(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
double Div(int x, int y)
{
	return (double)x / (double)y;
}


int main()
{
	int firNum = 0;
	int secNum = 0;
	char cal = '+';
	int result = 0;
	double divResult = 0;

	while (1)
	{
		printf("----------------------------------\n");
		printf("Calculator_v3\n");
		printf("Created : 2021-04-29\n");
		printf("Author : 서동우\n ");
		printf("----------------------------------\n");
		printf("계산할 두 정수를 입력해주세요 : ");
		scanf("%d %d", &firNum, &secNum);

		// TODO:두 정수말고 다른거 입력했을때 오류처리


		printf("연산 기호를 입력해주세요(+,-,*,/) : ");
		scanf(" %c", &cal);

		switch (cal)
		{
		case '+':
			result = Sum(firNum, secNum);
			break;

		case '-':
			result = Sub(firNum, secNum);
			break;

		case '*':
			result = Mul(firNum, secNum);
			break;

		case '/':
			if (secNum == 0)
			{
				printf("0으로는 나눌 수 없습니다\n\n");
				continue;
			}
			else
			{
				divResult = Div(firNum, secNum);
				printf("%d %c %d = %.2lf\n", firNum, cal, secNum, divResult);
				continue;
			}

			/*case 'q':
				printf("프로그램을 종료합니다.");
				exit(0);*/

		default:
			printf("연산 기호를 입력해주세요\n");
			continue;
		}

		printf("%d %c %d = %d", firNum, cal, secNum, result);
		printf("\n");

		int RepeatNum = 0;
		printf("반복하시겠습니까?(11, 00) : ");
		scanf("%d", &RepeatNum);
		printf("\n");

		if (RepeatNum == 11) 
		{
			continue;
		}
		if (RepeatNum == 00)
		{
			printf("종료합니다\n");
			exit(1);
		}
		else 
		{
			printf("똑바로 입력해주세요");
			
		}


	}
}




