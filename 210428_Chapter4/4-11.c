/*
������ �켱����

*/

#include <stdio.h>

int main() {
	int a = 10, b = 20;
	int res;

	res = (++a, ++b);  // �ǹ����� ���Ͼ��� �ڵ�
					   // , �� �����ڶ����, �̷� �ڵ尡 �ִٴ� ���� ���

	printf("a:%d\n", a);
	printf("b:%d\n", b);
	printf("res:%d\n", res);  // b�� ���

	return 0;
}