
/*
���� ������
�ϳ��� ���α׷��� ���� ���� ���Ϸ� ������ �ۼ�

�� ������ ����� ���ϴ� ���α׷�
1. main�� �Լ��� ȣ���ؼ� ���� ��
2. sub�� �Լ��� ���� ���� return
*/

#include <stdio.h>

void input_data(int*, int*);   // �� ������ �Է��ϴ� �Լ�
double average(int, int);      // ����� ���ϴ� �Լ�

int main() 
{
	int a, b;
	int result;

	input_data(&a, &b);        // �� ���� �Է�
	result = average(a, b);    // ��� ���
	printf("�� ������ ��� : %d\n", result);   // �Է°��� ��� ���

	return 0;
}