// ���׿�����
// res = (a > b) ? a : b  
// a > b�� ���̸� res = a, �����̸� res = b 

#include <stdio.h>

int main() 
{
	int a = 10, b = 20, res;

	res = (a > b) ? a : b;       // a�� b �߿� ū ���� res�� ����
	printf("ū �� : %d\n", res);

	return 0;
}