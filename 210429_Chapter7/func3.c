// �Է��� �ִ� �Լ�
#include<stdio.h>

void func(int, int );  // �Լ� ����(���� ���� �����ص���)

int main() 
{
	int a, b;
	a = 10, b = 20;

	func(a, b);     // �Է��� �ִ� �Լ� ȣ��
	return 0;
}

void func(int aa, int bb)  // �Լ� ���� �������� �� ����������Ѵ�
{
	int res;
	res = aa + bb;
	printf("res : %d\n", res);
}

