#include <stdio.h>

int main() 
{
	int a, b;
	a = 10, b = 20;
	int result = 0;

	// func �Լ��� res�� return �ϱ⶧���� �� ������� result�� �޾���.
	result = func(a, b); 
	printf("result : %d\n", result);

	// printf("%d", func(a, b));  // ���� �ڵ带 ���ٷ� ���� ��¹�
	
	return 0;
}

int func(int aa, int ab) // ����� �����ϴ� �Լ��̱⶧���� return�� ����ؾ���
{
	int res;
	res = aa + ab;

	return res;
}