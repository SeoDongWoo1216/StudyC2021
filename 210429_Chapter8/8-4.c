#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
	char str[80] = "applejam";              // char 80�� �迭����(80����Ʈ)�� �ʱ�ȭ

	printf("���� ���ڿ� : %s\n", str);      // �ʱ�ȭ ���ڿ� ���(���ڿ��̶� %s ���)
	printf("���ڿ� �Է� : ");
	scanf("%s", str);                       // ���ڿ��� scanf�� ���� Ű����� �Է¹���
											// scanf�Լ��� ���ڿ� �̿��� ���� null���ڸ� �ڵ����� �Է�����.
	                               
	printf("�Է� �� ���ڿ� : %s\n", str);   // �Էµ� ���ڿ� ���
	
	return 0;
}