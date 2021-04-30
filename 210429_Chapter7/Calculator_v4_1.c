#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 함수선언 
int Sum(int, int);
int Sub(int, int);
int Mul(int, int);
double Div(int, int);

// 메인
int main(void)
{
	int a, b = 0;       // 두 정수
	int result = 0;     // 두 정수의 연산값을 저장할 변수
	double div_result;  // 나누기했을때 저장할 연산값 저장할 변수
	char cal;
	int start_point;    // 시작할지 종료할지 저장할 변수 문자

	// 무한 반복으로 계속해서 계산기 사용 
	while (1)
	{
		printf("----------------------------------\n");
		printf("Calculator_v4\n");
		printf("Created : 2021-04-30\n");
		printf("Author : 서동우\n ");
		printf("----------------------------------\n");
		printf("계산기를 실행하시겠습니까?(1:시작, 0: 종료) : ");
		scanf("%d", &start_point);
		
		if (start_point == 0)
		{
			printf("계산기를 종료합니다\n");
			break;
		}
		else if (start_point == 1)
		{
			printf("계산기를 실행합니다.\n");

			printf("두 정수를 입력하세요 : ");
			scanf("%d  %d", &a, &b);

			printf("연산 기호를 입력하세요 : ");
			scanf(" %c", &cal);

			if (a > 0 && b > 0)  // a,b 값이 자연수일때 실행 
			{
				printf("계산결과 : ");

				if (cal == '+')
				{
					result = Sum(a, b);
					printf("%d + %d = %d\n", a, b, result);
				}
				else if (cal == '-')
				{
					result = Sub(a, b);
					printf("%d - %d = %d\n", a, b, result);
				}
				else if (cal == '*')
				{
					result = Mul(a, b);
					printf("%d * %d = %d\n", a, b, result);
				}
				else if (cal == '/')
				{
					if (b == 0)
					{
						printf("0으로는 나눌 수 없습니다. 다시 입력해주세요\n");
						continue;
					}
					else
					{
						div_result = Div(a, b);
						printf("%d ÷ %d = %.2lf\n", a, b, div_result);
					}
				}
				else
				{
					printf("연산기호는 +,-,*,/ 만 사용하세요\n"); // 잘못된 연산기호 오류 출력 
				}
			}
			else
			{
				printf("자연수만 입력하세요\n");
			}
			printf("\n");
		}

		else 
		{
			printf("0, 1 중 하나만 입력해주세요\n\n");
			continue;
		}
		
	}

}

// 함수 정의 
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
