#include<stdio.h>

void Sum();   // �Լ� ���� (����)
int main()
{
	Sum();    // Sum �Լ� ȣ��
	return 0;
}

void Sum()    // �Է°� ����� ���� �Լ�
{
	int a = 10, b = 20;
	int res;

	res = a + b;
	printf("%d", res);
}