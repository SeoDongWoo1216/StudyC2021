#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// �Լ����� 
int Sum(int, int);
int Sub(int, int);
int Mul(int, int);
double Div(int, int);

// ����
int main(void)
{
	int a, b, result;
	double div_result;
	char cal;

	// ���� �ݺ����� ����ؼ� ���� ��� 
	while (1)
	{
		printf("----------------------------------\n");
		printf("Calculator_v3\n");
		printf("Created : 2021-04-29\n");
		printf("Author : ������\n ");
		printf("----------------------------------\n");
		printf("���⸦ �����Ͻðڽ��ϱ�?(1:����, 0: ����) : ");
		scanf("%d", &a);
		
		if (a == 0) 
		{
			printf("���⸦ �����մϴ�\n");
			break;
		}
		else if (a == 1) 
		{
			printf("���⸦ �����մϴ�.\n");

			printf("�� ������ �Է��ϼ��� : ");
			scanf("%d  %d", &a, &b);

			printf("���� ��ȣ�� �Է��ϼ��� : ");
			scanf(" %c", &cal);


			if (a > 0 && b > 0)  // a,b ���� �ڿ����϶� ���� 
			{
				printf("����� : ");

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
					printf("%d x %d = %d\n", a, b, result);
				}
				else if (cal == '/')
				{
					if (b == 0)
					{
						printf("0���δ� ���� �� �����ϴ�. �ٽ� �Է����ּ���\n");
						continue;
					}
					else
					{
						div_result = Div(a, b);
						printf("%d �� %d = %.2lf\n", a, b, div_result);
					}
				}
				else
				{
					printf("�����ȣ�� +,-,*,/ �� ����ϼ���\n"); // �߸��� �����ȣ ���� ��� 
				}
			}
			else
			{
				printf("�ڿ����� �Է��ϼ���\n");
			}
			printf("\n");
		}

		else 
		{
			printf("0, 1 �� �ϳ��� �Է����ּ���\n\n");
			continue;
		}
		
	}

}

// �Լ� ���� 
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
