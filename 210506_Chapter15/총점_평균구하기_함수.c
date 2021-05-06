/*
1. 5�� �л��� ����, ����, ����, ü�� ������ �Է¹޴´�.(2�����迭 ���)
2. ���κ� ������ ����� ���Ѵ�.
3. �׸��� ������ ������ ��յ� ���Ͻÿ�
//int inputAry[5][4] = { {40,40,40,40},{50,50,50,50},{60,60,60,60}, {70,70,70,70}, {80,80,80,80 } };
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

// ���κ� �Լ�
// ���� �Լ�

void StudentScore();
void SubjectScore();

int main()
{
	int inputAry[5][4];

	// 2�����迭�� ����, ���� ���� ���ϱ�
	int col = sizeof(inputAry[0]) / sizeof(inputAry[0][0]);  // 4
	int row = sizeof(inputAry) / sizeof(inputAry[0]);        // 5
	printf("���� : %d\n", col);
	printf("���� : %d\n\n", row);

	// ���� ���� �Է�
	for (int i = 0; i < row; i++)
	{
		printf("%d�� �л��� ���� ���� �Է�(ex. 10 10 10 10) : ", i + 1);
		for (int j = 0; j < col; j++)
		{
			scanf("%d", &inputAry[i][j]);
		}
	}
	printf("\n");
	
	printf("-----------------------�л� ����, ���-----------------------\n");
	StudentScore(inputAry, col, row);											// �л����� ����, ��ձ��ϱ�
	printf("-------------------------------------------------------------\n");
	
	printf("\n");

	printf("-----------------------���� ����, ���-----------------------\n");
	SubjectScore(inputAry, col, row);											// ���� ����, ��ձ��ϱ�
	printf("-------------------------------------------------------------\n");

}


// �л� ����, ��� ���ϴ� �Լ�
void StudentScore(int (*piAry)[4], int col, int row) 
{
	for (int i = 0; i < row; i++)
	{
		int total = 0;
		double avg = 0;
		for (int j = 0; j < col; j++)
		{
			total += piAry[i][j];
		}
		avg = total / col;
		printf("%d�� �л��� ���� : %d, ��� : %.2lf\n", i + 1, total, avg);
	}
}


// ���� ����, ��� ���ϴ� �Լ�
void SubjectScore(int (*piAry)[4], int col, int row)
{
	char subject[4][4] = { "Lan", "Eng", "Mat", "Ath" };

	for (int i = 0; i < col; i++)
	{
		int total = 0;
		double avg = 0;
		
		for (int j = 0; j < row; j++)
		{
			total += piAry[j][i];
			if (j == 4) 
			{
				break;
			}
			else 
			{
				printf("%c", subject[i][j]);
			}
		}
		avg = total / row;
		
		printf(" ������ ���� : %d, ��� : %.2lf\n", total, avg);

		// printf("%d�� ������ ���� : %d, ��� : %.2lf\n", i + 1, total, avg);  // 1,2,3,4 �������������� ��¹�
	}
}