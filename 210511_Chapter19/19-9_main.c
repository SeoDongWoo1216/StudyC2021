/*
���α׷��� ���� ���� ���Ϸ� ������ �� ���ϵ��� ���� ������ �����ϱⰡ �����ʴ�.
�����Ϸ��� �ҽ����� ������ �������ϹǷ� �ٸ� ���Ͽ� ����� ���������� �˱� ��Ʊ� ����.

�ٸ� ���Ͽ� ����� ���������� ����Ҷ��� extern ����
�ٸ� ���Ͽ��� ���������� �������� ���ϰ� �Ҷ��� static�� ���
*/

#include <stdio.h>

int input_data(void);     // ����� �Է��ϰ� �� ���� ��ȯ 
double average(void);     // ����� ���ϴ� �Լ�
void print_data(double);  // ��� �Լ�

int count = 0;            // �Է��� ����� �� ����
static int total = 0;     // �Է��� ����� �� (static�� �ٸ� ���Ͽ����� ��������°���)

int main() 
{
	double avg;            // �Է��� ����� ���
	 
	total = input_data();  // ����� �Է��ϰ� �� ���� ��ȯ
	avg = average();       // ��հ��
	print_data(avg);

	return 0;
}

void print_data(double avg) 
{
	printf(" �Է��� ����� ���� : %d\n", count);
	printf(" ��ü �հ� ��� : %d, %.1lf\n", total, avg);
}