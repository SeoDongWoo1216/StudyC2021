#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<ctype.h>

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
		printf("계산할 두 정수(0~100까지)를 입력해주세요 : ");
		scanf("%d %d", &firNum, &secNum);

		if ( !(0 >= firNum && firNum >= 100) ) 
		{
			printf("범위에 맞는 숫자를 입력해주세요\n");
			continue;
		}
		else if (!(0 >= secNum && secNum >= 100)) 
		{
			printf("범위에 맞는 숫자를 입력해주세요\n");
			continue;
		}

		else 
		{
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
					printf("0으로는 나눌 수 없습니다\n");
				}
				else
				{
					divResult = Div(firNum, secNum);
					printf("%d %c %d = %.2lf\n", firNum, cal, secNum, divResult);
					continue;
				}
				break;

				/*case 'q':
					printf("프로그램을 종료합니다.");
					exit(0);*/

			default:
				printf("연산 기호를 입력해주세요");
				break;
			}

			printf("%d %c %d = %d", firNum, cal, secNum, result);
			printf("\n");


			int RepeatNum = 0;
			printf("반복하시겠습니까?(1, 0) : ");
			scanf("%d", &RepeatNum);
			printf("\n");

			if (RepeatNum == 0)
			{
				printf("종료합니다\n");
				exit(1);
			}
		}
		
	}
}




