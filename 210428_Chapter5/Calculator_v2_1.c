// �����ȣ�� �Է¹����� �װſ����� ����� ���
// v2�������� �ݺ�����ϱ�
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
		printf("Author : ������\n");
		printf("----------------------------------\n");
		printf("�� ������ �Է��ϼ��� : ");
		scanf("%d %d", &firNum, &secNum);
		printf("�����ȣ�� �Է��ϼ���(+,-,*,/) : ");
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
				printf("0���δ� ���� �� �����ϴ�");
			}
			else
			{
				printf("%d / %d = %.2lf\n", firNum, secNum, (double)firNum / (double)secNum);
				printf("%d %% %d = %d\n", firNum, secNum, firNum % secNum);
			}
			break;

		default:
			printf("�����ȣ�� �Է����ּ���");
			break;
		}
		printf("\n");
		printf("\n");

		int inputNum;
		printf("�ݺ��Ͻðڽ��ϱ�? (1:�ݺ�, 0:����) : ");
		scanf("%d", &inputNum);
		if (inputNum == 1)
		{
			repeatNum == 1;
		}
		else if (inputNum == 0)
		{
			break; // exit(1) �ε� ���ᰡ��
		}
	}

	return 0;
}