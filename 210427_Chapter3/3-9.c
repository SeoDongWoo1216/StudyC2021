#define _CRT_SECURE_NO_WARNINGS  // ��ó�����(scanf�� ���ȹ��������� �����ѵ� �����ϰڴٴ� ��)
#include<stdio.h>

int main() 
{
	/*
	Ű����� �Է¹޴� �Լ� : scanf()
	&�� �ּҸ� ��Ÿ����.
	scanf�� �׻� �ּҿ����� &a�� �ٿ������.
	*/

	int a;

	printf("���� 1���� �Է��ϼ��� : ");
	scanf_s("%d", &a);               // ���� a�� Ű����� �� �Է�
	printf("�Էµ� �� : %d\n", a); // �Է��� �� ���

	return 0;
}