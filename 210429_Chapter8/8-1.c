#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
	int ary[5];                // int�� ��� 5���� �迭 ����
							   // ary�� array�� ����
	ary[0] = 10;               // ù��° �迭 ��ҿ� 10 ����
	ary[1] = 20;               // �ι�° �迭 ��ҿ� 20 ����
	ary[2] = ary[0] + ary[1];  // ù��°, �ι�° ��Ҹ� ���� ����° ��ҿ� ����

	printf("ary[3]�� ������ ������ �Է����ּ��� : ");
	scanf("%d", &ary[3]);      // Ű����� �Է¹޾� �׹�° ��ҿ� ����

	printf("%d\n", ary[2]);    // ����° �迭 ��� ���
	printf("%d\n", ary[3]);
	printf("%d\n", ary[4]);    // ������ �迭 ��Ҵ� ������ ��
}