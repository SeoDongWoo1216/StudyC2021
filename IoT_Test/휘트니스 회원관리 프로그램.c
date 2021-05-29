/*
�ű�ȸ�� ����� ȸ����ȣ�� �̸�, ü���� �Է��ϰ�, heap ������ ����

ȸ����ȣ�� ������ �Է��ϸ� �Է��� ����Ǹ�, �� ȸ�� ��, ��� ü��, �ְ� ü���� ���� ȸ�� ������ ��µȴ�.

scanf�� ȸ����ȣ, �̸�, ü���Է� �Ѱ��� heap ������ ����
������ �Է��ϸ� �� ȸ����, ��� ü��, �ְ� ü���� ���� ȸ���� ���� ���
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
	int num;
	char name[20];
	double weight;
} Fitness;

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
		ary[i] = (Fitness*)malloc(sizeof(Fitness));    // ������ �Է��Ҷ� �����Ҵ�

		if (ary == NULL)
		{
			printf("�޸� �Ҵ� ����\n");
			break;
		}

		printf("ȸ����ȣ �Է�(�����Է��ϸ� ����) : ");
		scanf("%d", &ary[i]->num);
		if (ary[i]->num < 0)               // ���� �Է������� ����
		{
			break;
		}
		
		printf("�̸��Է� : ");
		char* tempName[20];
		scanf(" %s", ary[i]->name);        // �̸��� �ȵ��� �ӽ÷� ��������� strcpy�� �־���
		strcpy(tempName, ary[i]->name);

		printf("ü���Է� : ");
		scanf("%lf", &ary[i]->weight);

		count++;                          // �Է��� �������� index++ ����

		int Restart = 0;                 
		printf("�� �Է��Ͻðڽ��ϱ�?(�ڿ��� : ��, ���� : �ƴϿ�) : ");   // �� �Է����� ���
		scanf("%d", &Restart);
		if (Restart < 0)
		{
			break;
		}
		printf("\n\n");
	}

	
	// ��ü ��� ��ω���� ���
	total_number(count);


	// ȸ������ ��� ü�� ��ȯ
	double averagetemp = average_weight(ary, count);
	printf("\n\n��� ü�� : %.2lf kg\n", averagetemp / count); // ��� ȸ������ ü���� ��ȯ�ް� count�� �����༭ ���


	// ���� ���ſ���� ���� ���
	int max = max_weight(ary, count);
	printf("\n-------�ִ� ü���� ���� ȸ������------\n");
	printf("��ȣ : %d\n", ary[max]->num);
	printf("�̸� : %s\n", ary[max]->name);
	printf("ü�� : %.2lf\n", ary[max]->weight);
	printf("--------------------------------------\n");


	// ��ü ȸ������ ���� ���
	print_info(ary, count);


	// �����Ҵ� ����
	free_ary(ary, count);
	//printf("������� ���������� ���������� ��µȵ�\n");
	
	return 0;
}


/// <summary>
/// ��ü ��� ȸ�� �� ��� �Լ�
/// </summary>
void total_number(int count)
{
	printf("\n\n\n��ü ȸ�� ���� %d���Դϴ�.\n", count);  // �� ȸ������ count�� �������� count�� ���
}


/// <summary>
/// ȸ������ ��� ü�� ��ȯ �Լ�(��Ȯ���� ��� ȸ���� ü���� ���ؼ� ��ȯ)
/// </summary>
double average_weight(Fitness** pary, int count)
{
	double avgtemp = 0;                  
	for (int i = 0; i < count; i++)
	{
		if (pary == NULL)
		{
			printf("����� �޸𸮰� �����ϴ�\n");
			break;
		}
		avgtemp += pary[i]->weight;       // 
	}
	//printf("(�Լ��ȿ���)��� ü�� : %.2lf kg\n", avgtemp / count);
	return avgtemp;
}


/// <summary>
/// �ִ� ü�� ȸ���� ������ȯ(���� ���ſ���� ����������� ���°���� �˻��ϴ� �Լ�)
/// </summary>
int max_weight(Fitness** pary, int count)
{
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
	//printf("�̸� : %s\n", pary[temp]->name);
	//printf("��ȣ : %d\n", pary[temp]->num);
	//printf("ü�� : %.2lf\n\n", pary[temp]->weight);

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
	printf("\n");
	for (int i = 0; i < count; i++)
	{
		printf("%d�� ȸ�� �Ҵ�����\n", i);
		free(pary[i]);
	}
}
