// �迭�� �ݺ����� ����� ���� ó�� ���α׷�
// �迭�� ó���� for������ �Ѵٴ� ���� ���.

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int score[5];
	int i;
	int total = 0;
	double avg;

	for (i = 0; i < 5; i++)          // i�� 0���� 4���� 5�� �ݺ�
	{
		scanf("%d", &score[i]);      // �� �迭 ��ҿ� ���� �Է�
	}

	for (i = 0; i < 5; i++)          // ������ �����Ͽ� ���� ���
	{
		total += score[i];           // ��� ���(score[0] ~ score[4] ���� �հ��)
	}
	avg = total / 5.0;

	for (i = 0; i < 5; i++) 
	{
		printf("%3d", score[i]);
	}

	printf("\n");

	printf("��� : %.1lf\n", avg);   // ��� ���

	return 0;
}