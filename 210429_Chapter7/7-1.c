// 2���� �Լ��� ���� ���α׷�
#include<stdio.h>

int sum(int x, int y);    // sum �Լ� ����

int main(void) {
	int a = 10, b = 20;
	int result;

	result = sum(a, b);    // �Լ� ȣ��
	printf("result : %d\n", result);

	return 0;
}

int sum(int x, int y)  // �Լ� ���� ����
{
	int temp;
	temp = x + y;
	return temp;       // temp �� ��ȯ
}