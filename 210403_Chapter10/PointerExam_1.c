#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
	date : 2021-04-30
	Author : ������
	description :
	1. 10���� ������ �Է¹޾� �迭�� �����Ѵ�.
	2. �迭�� ����Ѵ�.
	3. �迭�� ����� ���� 
	ary[9] <-> ary[0]
	ary[8] <-> ary[1]
	ary[7] <-> ary[2]
	ary[6] <-> ary[3]  ������ ����� ���� ��ȯ�Ѵ�.
	
	4. �����͸� ��ȯ�� �迭�� ����Ѵ�.
	5. �Լ��̸�
	input_ary();
	swap_ary();
	print_ary();

	6. �����Ͱ��ƴ� �迭 ��ü�� �ٲٴ� ������� ���α׷��� �ۼ�
*/

void input_ary(int*, int);
void swap_ary(int *, int);
void print_ary(int*, int);

int main() 
{
	int iAry[10];
	int size = sizeof(iAry) / sizeof(iAry[0]);
	input_ary(iAry, size);
	print_ary(iAry, size);

	printf("\n");

	swap_ary(iAry, size);
	print_ary(iAry, size);
}

void input_ary(int* piAry, int size)
{
	int i;  // for���� ����
	printf("10���� ���� �迭 �Է� : ");
	for (i = 0; i < size ; i++)
	{
		scanf("%d", piAry + i);
	}
}

void swap_ary(int* piAry ,int size) 
{
	int i;  // for���� ����
	int temp = 0;
	for (i = 0; i < size/2; i++) 
	{
			temp = piAry[i];
			piAry[i] = piAry[9 - i];   
			piAry[9 - i] = temp;
	}
}

void print_ary(int * piAry, int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		printf("%d ", piAry[i]);
	}
}