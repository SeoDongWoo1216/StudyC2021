/*
1. 5�� �л��� ����, ����, ����, ü�� ������ �Է¹޴´�.(2�����迭 ���)
2. ���κ� ������ ����� ���Ѵ�.
3. �׸��� ������ ������ ��յ� ���Ͻÿ�
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//int inputAry[5][4] = { {40,40,40,40},{50,50,50,50},{60,60,60,60}, {70,70,70,70}, {80,80,80,80 } };

int main() 
{
	int inputAry[5][4];

	// 2�����迭�� ����, ���� ���� ���ϱ�
	int col = sizeof(inputAry[0]) / sizeof(inputAry[0][0]);  // 4
	int row = sizeof(inputAry) / sizeof(inputAry[0]);        // 5
	printf("���� : %d\n", col);
	printf("���� : %d\n\n", row);
	
	for (int i = 0; i < row; i++) 
	{
		printf("%d�� �л��� ���� ���� �Է�(ex. 10 10 10 10) : ", i + 1);
		for (int j = 0; j < col; j++) 
		{
			scanf("%d", &inputAry[i][j]);
		}
	}
	printf("\n");


	// �л����� ����, ��ձ��ϱ�
	printf("-----------------------�л� ����, ���-----------------------\n");
	for (int i = 0; i < row; i++)
	{
		int total = 0;
		double avg = 0;
		for (int j = 0; j < col; j++)
		{
			total += inputAry[i][j];
		}
		avg = total / col;

		printf("%d�� �л��� ���� : %d, ��� : %.2lf\n", i + 1, total, avg);
	}
	printf("-------------------------------------------------------------\n");
	printf("\n");


	// ���� ����, ��ձ��ϱ�
	printf("-----------------------���� ����, ���-----------------------\n");
	for (int i = 0; i < col; i++) 
	{
		int total = 0;
		double avg = 0;
		for (int j = 0; j < row; j++) 
		{
			total += inputAry[j][i];
		}
		avg = total / row;
		printf("%d�� ������ ���� : %d, ��� : %.2lf\n", i+1, total, avg);
	}
	printf("-------------------------------------------------------------\n");

	


}
