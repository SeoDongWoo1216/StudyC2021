#include <stdio.h>

int main(void) 
{
	// 10���� ���
	printf("%d\n", 12);     // 10���� ���� ���
	printf("%d\n", 014);    // 8���� ���� ���
	printf("%d\n\n", 0xc);  // 16���� ���� ���

	// 8����, 16���� ���
	printf("%o\n", 12);    // 8���� ��� : 14
	printf("%x\n", 014);   // 16���� �ҹ��� ��� : c
	printf("%X\n", 0xc);   // 16���� �빮�� ��� : C

	return 0;
}