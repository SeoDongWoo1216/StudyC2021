// 2���� char �迭
/*
�ϳ��� ���ڿ��� �����ϱ����ؼ� 1���� char �迭�� �ʿ��ϰ�,
�������� ���ڿ��� �����Ϸ��� 1���� char�迭�� ������ �ʿ��մϴ�.

2���� char �迭�� �������� ���ڿ��� ó���Ҷ� ����Ѵ�.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
	char animal[5][20]; // 2���� char �迭 ����
	int i;				// �ݺ� ���� ����
	int count;			// ���� ���� ������ ����

	count = sizeof(animal) / sizeof(animal[0]);   // ���� �� ���( ��ü(100) / 0������ ũ��(20) = 5 )

	printf("%d", count);
	// ���ڿ� �Է�
	for (i = 0; i < count; i++) 
	{
		scanf("%s", animal[i]);
	}

	// ���ڿ� ���
	for (i = 0; i < count; i++) 
	{
		printf("%s ", animal[i]);
	}

	return 0;
}

