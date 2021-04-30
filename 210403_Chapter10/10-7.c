#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void input_ary(double* pa, int size);
double find_max(double* pa, int size);

int main() 
{
	double ary[5];
	double max;
	int size = sizeof(ary) / sizeof(ary[0]);

	input_ary(ary, size);
	max = find_max(ary, size);
	printf("�迭�� �ִ밪 : %.1lf\n", max);

	return 0;
}

void input_ary(double* pa, int size) 
{
	int i;

	printf("%d���� �Ǽ��� �Է� : ", size);
	for (i = 0; i < size; i++) 
	{
		scanf("%lf", pa + i);    // &pa[i]�� ����, �Է��� �迭 ����� �ּҸ� ����
	}
}

double find_max(double* pa, int size) 
{
	// �ִ밪�� ã�� �˰��� 
	// : for�������� ó������ �������� ���ϰ� ���� �������� �� ũ�� ó������ �־���
	// �������� �ٴ������� ���ϰ� �ٴ������� �ְ�... �ݺ�
	double max;
	int i;

	max = pa[0];                   // ù��° �迭 ���� �ִ����� ����
	for (i = 1; i < size; i++)     // �ι�° �迭 ������ max�� ��
							       // i=0���������� ���� ���ڽŰ� �����ʿ䰡 ���⶧��)
	{
		if (pa[i] > max) max = pa[i];  // ���ο� �迭 ����� ���� max���� ũ�� �������ش�.
	}

	return max;                    // �ִ밪�� ��ȯ
}