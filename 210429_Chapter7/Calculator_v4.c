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
		printf("Author : ������\n ");
		printf("----------------------------------\n");
		printf("����� �� ����(0~100����)�� �Է����ּ��� : ");
		scanf("%d %d", &firNum, &secNum);

		if ( !(0 >= firNum && firNum >= 100) ) 
		{
			printf("������ �´� ���ڸ� �Է����ּ���\n");
			continue;
		}
		else if (!(0 >= secNum && secNum >= 100)) 
		{
			printf("������ �´� ���ڸ� �Է����ּ���\n");
			continue;
		}

		else 
		{
			printf("���� ��ȣ�� �Է����ּ���(+,-,*,/) : ");
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
					printf("0���δ� ���� �� �����ϴ�\n");
				}
				else
				{
					divResult = Div(firNum, secNum);
					printf("%d %c %d = %.2lf\n", firNum, cal, secNum, divResult);
					continue;
				}
				break;

				/*case 'q':
					printf("���α׷��� �����մϴ�.");
					exit(0);*/

			default:
				printf("���� ��ȣ�� �Է����ּ���");
				break;
			}

			printf("%d %c %d = %d", firNum, cal, secNum, result);
			printf("\n");


			int RepeatNum = 0;
			printf("�ݺ��Ͻðڽ��ϱ�?(1, 0) : ");
			scanf("%d", &RepeatNum);
			printf("\n");

			if (RepeatNum == 0)
			{
				printf("�����մϴ�\n");
				exit(1);
			}
		}
		
	}
}




