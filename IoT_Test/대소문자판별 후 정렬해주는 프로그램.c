/*
�� �ҹ��� ���о��� ���ĺ��� �Է��ϸ� �� �ҹ��ڸ� �Ǻ��Ͽ� �з��ϰ�, ���� ������ �����Ͽ� ����ϴ� ���α׷�

1. �Է¹��� �迭 : input_ary
2. �迭�� ũ��� 10
3. ���� �˰����� ���������� ���
4. �������� �˰����� �Լ��� ����
5. �ҹ��� ���� �迭�̸��� lower_ary
   �빮�� ���� �迭�̸��� upper_ary

- ���Ḯ��Ʈ�� ����� ���
1. �Է¹��� �迭�� �̸��� input_ary
2. �迭�� ũ��� 10���� ����
3. ���ľ˰����� �������� ���
*/

/*
���� ����

1. ���ڿ��� �迭�� �Է¹���
2. ���� ���� �迭���� ��ҹ������� ����(�̶� �빮�ڹ迭, �ҹ��ڹ迭�� ����)
3. ���� �迭�� �������ķ� ����
4. ���
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void insertSort(char*, int);  // ���� ���� �Լ�
void print_ary(char*, int, int);             // �迭 ��� �Լ�

int main() 
{
	int i = 0;          // for���� �� �ε���
	int j = 0;          // �빮�� ���� ���� ī��Ʈ
	int k = 0;          // �ҹ��� ���� ���� ī��Ʈ

	int lowerFlag = 0;  // �迭 ���翩�� �÷���
	int upperFlag = 0;
	
	char ary[10];       // ���ĺ��� �Է¹��� �迭
	char lower_ary[10]; // �ҹ��� �迭
	char upper_ary[10]; // �빮�� �迭


	printf("���ĺ� �Է� : ");


	// ���ĺ� �Է� �� ��ҹ��� ����
	for (i = 0; i < sizeof(ary) / sizeof(ary[0]); i++) 
	{
		scanf(" %c", &ary[i]);                  // ��ĭ ������ؾ� �迭��ҿ� ���´� ������ �Էµ�
		if (ary[i] >= 'A' && ary[i] <= 'Z') 
		{
			upperFlag = 1;
			printf("%d��°���� �빮��\n", i);
			upper_ary[j] = ary[i];
			j++;
		}

		if (ary[i] >= 'a' && ary[i] <= 'z') 
		{
			lowerFlag = 1;
			printf("%d��°���� �ҹ���\n", i);
			lower_ary[k] = ary[i];
			k++;
		}
	}

	// �ҹ��� �迭�� ��������
	insertSort(lower_ary, k);


	// �빮�� �迭�� ��������
	insertSort(upper_ary, j);


	// �迭 ���
	printf("\n\n-----------�빮��----------\n");
	print_ary(upper_ary, j, upperFlag);

	printf("\n\n-----------�ҹ���----------\n");
	print_ary(lower_ary, k, lowerFlag);

	return 0;
}


/// <summary>
/// ���ĺ� ���� ���� �Լ�
/// </summary>
void insertSort(char* cAry, int count) 
{
	for (int i = 1; i < count; i++)
	{
		for (int x = 0; x < i; x++)
		{
			if (cAry[x] > cAry[i])
			{
				char temp;
				temp = cAry[x];
				cAry[x] = cAry[i];
				cAry[i] = temp;
			}
		}
	}
}


/// <summary>
/// �迭 ��� �Լ�
/// </summary>
void print_ary(char *cAry, int count, int Flag) 
{
	for (int i = 0; i < count; i++)
	{
		if (Flag == 0)
		{
			printf("�迭�� �������� �ʽ��ϴ�.\n");
			break;
		}
		printf("%c ", cAry[i]);
	}
}