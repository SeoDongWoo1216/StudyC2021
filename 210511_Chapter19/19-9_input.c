#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

extern int count;         // 19-9_main.c ������ ���� ���� count ����
int total = 0;            // ���� ���� ����

int input_data(void) 
{
	int pos;              // �ڿ��� ����

	while (1) 
	{
		printf("��� �Է� : ");
		scanf("%d", &pos);   // �ڿ��� �Է�
		if (pos < 0) break;  // ���� ������ ����
		count++;             // ���� ����
		total += pos;        // �Է°��� ���� ���� total�� ����
	}

	return total;            // ���� ���� total�� �� ��ȯ
}