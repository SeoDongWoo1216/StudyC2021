// 9-7_1 ���� �ٸ��� Swap �Լ��� a, b�� �ּҰ��� ��������.


#include<stdio.h>

void Swap(int, int);

int main() 
{
	int a = 10;
	int b = 20;
	int temp = 0;
	printf("�ٲٱ��� a, b : %d, %d\n", a, b);
	Swap(&a, &b);
	printf("�ٲ� ��  a, b : %d, %d\n", a, b);

	return 0;
}

void Swap(int *x, int *y) 
{
	// 2���� ���� �ٲܶ� ���� �˰���
	// �ӽ÷� temp�� �����ؼ� ���� �Դٰ��ٽ��Ѽ� ���� �ٲٴ� ����
	int temp = 0;
	temp = *x;   // *x �����͸� temp�� ����(�Ϲ� ����ó�� ���°���)
	*x = *y;     // *y �����͸� *x�� ����
	*y = temp;
}