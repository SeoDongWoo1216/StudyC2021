#include <stdio.h>

int main() 
{
	
	// ���� ����
	int a = 123456;
	double b = 12345678;
	char c = 'A';

	printf("int�� ������ �ּ�    : %p\n", &a);     // �ּ� �����ڷ� �ּҰ��
	printf("double�� ������ �ּ� : %p\n", &b);  // %p�� �ּҸ� ����� �� ����.
	printf("char�� ������ �ּ�   : %p\n", &c);

	return 0;
}