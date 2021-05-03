// �ζ� ���α׷�.c

/*
1. �ζ� ��ȣ�� ������ �� �ִ� �迭�� ����(lotto[6])
2. �ζǹ�ȣ �Է� (������ ��ȣ �Է½� ���� �޼��� ����ϰ�, �� �κк��� �ٽ��Է¹ޱ�)
3. main���� input_lotto(), print_lotto() �Լ� ����

�ٷ��ԷµȰ��� �迭�� ������������ �ԷµȰŸ� �ӽú����� ����ؼ�
������ �������ͼ� �ٽ� �Է��϶����
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

input_lotto(int*,int);
print_lotto(int *, int);


int main()
{
	int lotto[6];
	int size = sizeof(lotto) / sizeof(lotto[0]);

	input_lotto(lotto, size);
	print_lotto(lotto, size);
}





input_lotto(int* iAry, int size) 
{
	int i, j, temp;
	
	for (i = 0; i < 6; i++)
	{
		printf("%d ��° �Է� : ", i + 1);
		scanf("%d", &temp);

		// �ζǹ�ȣ 0~45 ���ڸ� �Է��ߴ��� �˻�
		if ((temp <= 0) || (temp > 45))
		{
			printf("0~45������ ���� �ƴմϴ�. �ٽ��Է��ϼ���\n");
			i--;
			continue;
		}

		// ù��°�� ���� lotto�� ������ �״�� ����
		if (i == 0)
		{
			iAry[i] = temp;
		}

		// �ζǹ迭 �ߺ��˻�
		for (j = 0; j < i; j++)
		{
			if (temp == iAry[j])
			{
				printf("�ߺ��˴ϴ�. �ٽ��Է��ϼ���\n");
				i -= 1;
				break;  // �ڡڡ�
			}
			else
			{
				iAry[i] = temp;
			}
		}
	}
}


// �ζǹ迭 ���
print_lotto(int *iAry, int size) 
{
	int i;
	for (i = 0; i < 6; i++)
	{
		printf("%d ", iAry[i]);
	}
}