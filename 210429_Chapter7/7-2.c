#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int get_num(void);                   // �Լ� ����

int main(void) 
{
	int result;

	result = get_num();              // �Լ� ȣ��, ��ȯ���� res
	printf("��ȯ�� : %d\n", result); // ��ȯ�� ���
	return 0;
}

int get_num(void)				     // �Ű������� ���� ��ȯ���� �ִ�.
{
	int num;					     // Ű���� �Է°��� ������ ����

	printf("��� �Է� : ");		     // �Է� �ȳ� �޼���
	scanf("%d", &num);               // Ű���� �Է�

	return num;                      // �Է��� �� ��ȯ
}