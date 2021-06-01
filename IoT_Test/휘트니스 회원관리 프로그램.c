/*
	��Ʈ�Ͻ� ȸ������ ���α׷�
	�ű�ȸ�� ����� ȸ����ȣ�� �̸�, ü���� �Է��ϰ�, heap ������ ����

	ȸ����ȣ�� ������ �Է��ϸ� �Է��� ����Ǹ�, �� ȸ�� ��, ��� ü��, �ְ� ü���� ���� ȸ�� ������ ��µȴ�.

	scanf�� ȸ����ȣ, �̸�, ü���Է� �Ѱ��� heap ������ ����
	ȸ����ȣ�� ������ �Է��ϸ� �� ȸ����, ��� ü��, �ְ� ü���� ���� ȸ���� ���� ���

	���� ����
	1. ����ü����
	2. main���� ȸ�������� �Է¹ް� �Է¹��� ��ŭ�� �޸𸮿� �����Ҵ�
	3. ȸ����ȣ���� -1�� �Է������� ȸ�������� �ߵ��� ����

	���� ����
	1. �ƹ��͵� �Է¾��ϰ� ȸ����ȣ�� ������ �������� => �ƹ��͵� �Է¾��ߴٰ� ����ϰ� ����
	2. ȸ����ȣ, ȸ��ü�߿� ���ڿ��� �Է������� => ���ڸ��� ���Ŵ����ٰ� ����ϰ� ����
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct      // ����ü ����
{
	int num;
	char name[20];
	double weight;
} Fitness;


// �Լ���
void total_number(int count);                     // ��ü ��� ȸ�� �� ��ȯ
double average_weight(Fitness** pary, int count); // ��� ü�� ��ȯ
int max_weight(Fitness** pary, int count);        // �ִ� ü�� ȸ���� index ��ȯ
void print_info(Fitness** pary, int index);       // ȸ�� ���� ���
void free_ary(Fitness** pary, int count);         // ���� �Ҵ� ���� ����


int main()
{
	int count = 0;        // ���� ���° ȸ������ index ���� ����
	Fitness* ary[100];    // ������ �迭 ����

	for (int i = 0; i < sizeof(ary) / sizeof(Fitness*); i++) 
	{
		// �Է¹��� �ӽ� ���� ����
		int tempNum = 0;               
		char tempName[20] = { 0 };
		double tempWeight = 0.0;


		// ȸ�� ���� �Է�
		printf("ȸ�� ��ȣ �Է�(������ �Է��ϸ� ����) : ");
		scanf("%d", &tempNum);
		getchar();
		if (1 != tempNum)                  // ���ڸ��� ���� �Է������� ���� ����
		{
			printf("(ȸ����ȣ�Է�)���ڸ� �Է��ϼ̽��ϴ�. �����մϴ�.\n");
			exit(1);
		}
		else if (tempNum < 0)
		{
			printf("������ �Է��ϼ����� �����մϴ�.\n");
			break;
		}

		
		printf("ȸ�� �̸� �Է� : ");
		scanf("%s", tempName);
		getchar();

		printf("ȸ�� ü�� �Է� : ");
		scanf("%lf", &tempWeight);
		getchar();

		if (1 != tempWeight)               // ���ڸ��� ���� �Է������� ���� ����
		{
			printf("(ȸ��ü���Է�)���ڸ� �Է��ϼ̽��ϴ�. �����մϴ�.\n");
			exit(1);
		}

		// �Է¹��� ������ �޸𸮿� �����Ҵ�
		ary[i] = (Fitness*)malloc(sizeof(Fitness));        
		if (ary[i] != NULL)
		{
			ary[i]->num = tempNum;
			strcpy(ary[i]->name, tempName);
			ary[i]->weight = tempWeight;
		}

		printf("\n");
		count++;
	}


	// ��ü ��� ��ω���� ���
	total_number(count);


	// ȸ������ ��� ü�� ��ȯ
	double averagetemp = average_weight(ary, count);
	if (averagetemp != 0)     // averagetemp = 0 �� count�� 0�϶� ��ȯ�ϹǷ� ȸ�������� �������̴�.
	{
		printf("\n-----------------���ü�� ���-----------------\n");
		printf("��� ü�� : %.2lf kg\n", averagetemp); // ��� ȸ������ ���ü���� ��ȯ�ް� ���
		printf("-----------------------------------------------\n");
	}


	// ���� ���ſ���� ���� ���
	int max = max_weight(ary, count);
	
	if (max != 0)            // max = 0�� count�� 0�̹Ƿ� ȸ�������� �������̴�.
	{
		printf("\n-------�ִ� ü���� ���� ȸ������------\n");
		printf("��ȣ : %d\n", ary[max]->num);
		printf("�̸� : %s\n", ary[max]->name);
		printf("ü�� : %.2lf\n", ary[max]->weight);
		printf("--------------------------------------\n");
	}


	// ��ü ȸ������ ���� ���
	print_info(ary, count);


	// �����Ҵ� ����
	free_ary(ary, count);
	
	return 0;
}


/// <summary>
/// ��ü ��� ȸ�� �� ��� �Լ�
/// </summary>
void total_number(int count)
{
	printf("\n-----------------��ü ȸ�� ��-------------------\n");
	printf("��ü ȸ�� ���� %d���Դϴ�.\n", count);  // �� ȸ������ count�� �������� count�� ���
	printf("------------------------------------------------\n");
}


/// <summary>
/// ȸ������ ��� ü�� ��ȯ �Լ�
/// </summary>
double average_weight(Fitness** pary, int count)
{
	if (count == 0)
	{
		printf("(���ü�߹�ȯ) ȸ���� �����ϴ�\n");
		return 0;
	}
	double avgtemp = 0;                  
	for (int i = 0; i < count; i++)
	{
		
		avgtemp += pary[i]->weight;           // ȸ������ ü���� �� ������
	}
	return (avgtemp/count);
}


/// <summary>
/// �ִ� ü�� ȸ���� ������ȯ(���� ���ſ���� ����������� ���°���� �˻��ϴ� �Լ�)
/// </summary>
int max_weight(Fitness** pary, int count)
{
	if (count == 0)
	{
		printf("(�ִ�ü��) ȸ���� �����ϴ�.");
		return 0;
	}
	int temp = 0;
	int max = pary[0]->weight;
	for (int i = 1; i < count; i++)
	{
		if (pary[i]->weight > max)
		{
			max = pary[i]->weight;
			temp = i;
		}
	}

	return temp;    // ���� ���ſ���� �ε����� ��ȯ
}


/// <summary>
/// ȸ�� ���� ���
/// </summary>
void print_info(Fitness** pary, int index)
{
	// 1. scanf�� ���� �Է¹��� ȸ���� ����?
	// 2. ��ü ȸ���� ���� ���? => ä��

	printf("\n");

	if (index == 0)
	{
		printf("(ȸ������) ȸ���� �����ϴ�.\n");
		return;
	}
	// ��ü ��ϵ� ȸ�� ���
	for (int i = 0; i < index; i++)
	{
		printf("-------------%d�� ȸ�� ����-------------\n", i + 1);
		printf("��ȣ : %d\n", pary[i]->num);
		printf("�̸� : %s\n", pary[i]->name);
		printf("ü�� : %.2f\n", pary[i]->weight);
		printf("\n");
	}
}


/// <summary>
/// ���� �Ҵ� ���� ����
/// </summary>
void free_ary(Fitness** pary, int count)
{
	if (count == 0) 
	{
		printf("(free����) ������ �޸𸮰� �����ϴ�.\n");
		return;
	}
	printf("\n");
	for (int i = 0; i < count; i++)
	{
		printf("%d�� ȸ�� �Ҵ�����\n", i);
		free(pary[i]);
	}
}
