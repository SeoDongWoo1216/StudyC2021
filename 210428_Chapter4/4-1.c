#include<stdio.h>

int main() {
	int a, b;
	int sum, sub, mul, inv;

	a = 10;  // ���� ����(=)
	b = 20;  
	sum = a + b; // ���ϱ� ����(+) �� ���� ����(=)
	sub = a - b; // ����   ����(-) �� ���� ����(=)
	mul = a * b; // ���ϱ� ����(*) �� ���� ����(=)
	inv = -a;    // ����   ����(-) �� ���� ����(=)

	printf("a�� �� : %d\n", a);
	printf("b�� �� : %d\n", b);
	printf("���� : %d\n", sum);
	printf("���� : %d\n", sub);
	printf("���� : %d\n", mul);
	printf("a�� ���� ���� : %d\n", inv);

	return 0;
}