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
		printf("Author : ������\n");
		printf("----------------------------------\n");
		printf("�� ���� �Է� : ");
		scanf("%d %d", &firNum, &secNum);

	
		printf("������ ��ȣ �Է�(+,-,*,/) : ");
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
				printf("��Ģ���� ��ȣ�� �Է����ּ���\n\n\n");
				break;
		}
		printf("\n");

		
		char reStart[1] = { '0' };

		while (reStart[0]) 
		{
			printf("�ݺ��Ͻðڽ��ϱ�? (r:�� ���, e:����) : ");
			scanf("%s", reStart);

			if (reStart[0] == 'e' || reStart[0] == 'E')
			{
				printf("���α׷��� �����մϴ�\n");
				exit(1);
			}
			if (reStart[0] == 'r' || reStart[0] == 'R')
			{
				printf("�ٽ� ����մϴ�.\n");
				break;
			}
			else
			{
				printf("r, e���� �ٸ� ���� �Է��ϼ̽��ϴ�. �ٽ��Է��ϼ���.\n");
			}
			printf("\n");
		}

	}

	return 0;
}