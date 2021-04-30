#include <stdio.h>

void print_ary(int*, int);   // �Ű������� 2���� �Լ� ����

int main() 
{
	// ���� 5, 7���� ��Ҹ� ������ �迭 ����
	int ary1[5] = { 10, 20, 30, 40, 50 };   
	int ary2[7] = { 10, 20, 30, 40, 50, 60, 70 };  

	print_ary(ary1, sizeof(ary1) / sizeof(ary1[0]));
	printf("\n");
	print_ary(ary2, sizeof(ary2) / sizeof(ary2[0]));

	return 0;
}

// ù��° �Ű������� �迭�̸����� ������ �����ͷ� �޾ƾ��Ѵ�.
void print_ary(int* pa, int size) // �迭��� �迭 ����� ������ �޴� �Ű����� ����
{
	int i;

	for (i = 0; i < size; i++)    // size�������� �ݺ� Ƚ�� ����
	{
		printf("%d ", pa[i]);
	}
}