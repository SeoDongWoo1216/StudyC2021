#include <stdio.h>

void print_ary(int*);        // �Լ� ����

int main() 
{
	int ary[5] = { 10, 20, 30, 40, 50 };

	print_ary(ary);          // �迭���� �ְ� �Լ� ȣ��

	return 0;
}

// �迭���� ������ �Լ��� �Ű������� �����ͳ� �迭�� �޾ƾ��Ѵ�
void print_ary(int* pa)        
{
	int i;

	for (i = 0; i < 5; i++) 
	{
		printf("%d ", pa[i]);  // �迭�� ��� ���
	}
}