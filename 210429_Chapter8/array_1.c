#include <stdio.h>

int main()
{
	int i;
	int ary[5] = { 10, 20, 30, 40, 50 };         // int�� 5���� �������� �迭����
	int arysize = sizeof(ary) / sizeof(ary[0]);  // �迭�� �� ������ ���ϴ� ����
	// �迭�� ��ü������ / �迭�� �� �ϳ��� ũ�� => arysize = 5

	/*
	�迭 ���� ������ �������� ���ϴ� �� : ��ü������ / �迭 ��� �ϳ��� ũ��
	int ary2[7] = { 1, 2, 3, 4, 5, 6, 7 };
	int ary2size = sizeof(ary2) / sizeof(ary2[0]);
	printf("%d", ary2size);
	*/


	for (i = 0; i < arysize; i++) 
	{
		printf("ary[%d] = %d\n", i, ary[i]);
	}

	printf("\n");

	for (i = arysize-1; i >= 0; i--)
	{
		printf("ary[%d] = %d\n", i, ary[i]);
	}

	return 0;
}