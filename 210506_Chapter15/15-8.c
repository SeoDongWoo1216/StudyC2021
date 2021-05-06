#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void func(int (*fp)(int, int));
int sum(int a, int b);
int mul(int a, int b);
int max(int a, int b);

int main() 
{
	int sel;
	printf("----------------------------------\n");
	printf("1. �� ������ ��\n");
	printf("2. �� ������ ��\n");
	printf("3. �� ���� �߿��� ū �� ���\n");
	printf("----------------------------------\n");
	printf("���ϴ� ������ �����ϼ��� : ");
	scanf("%d", &sel);

	switch (sel) 
	{
		case 1: func(sum); break;  // 1�̸� func�� ���� ��� �߰�
		case 2: func(mul); break;  // 2�̸� func�� ���� ��� �߰�
		case 3: func(max); break;  // 3�̸� func�� ū �� ���ϴ� ��� �߰�
		default: printf("1, 2, 3�߿� �ϳ��� �������ּ���");
	}

	return 0;
}

void func(int (*fp)(int, int)) 
{
	int a, b;
	int res;

	printf("�� ������ ���� �Է��ϼ��� : ");
	scanf("%d%d", &a, &b);				    // �� ���� �Է�
	res = fp(a, b);						    // �Լ� �����ͷ� ����Ű�� �Լ��� ȣ��
	printf("������� : %d\n", res);
}

int sum(int a, int b)						// ���� �Լ�
{
	return (a + b);
}

int mul(int a, int b)					    // ���� �Լ�
{
	return (a * b);
}

int max(int a, int b) 
{
	if (a > b) return a;
	else return b;
}