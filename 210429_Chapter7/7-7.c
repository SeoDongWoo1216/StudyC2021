#include<stdio.h>

void fruit(int count);

int main() 
{
	fruit(1);                // ó�� ȣ���ϹǷ� 1�� �μ�����
	return 0;
}

void fruit(int count)        // ȣ�� Ƚ���� �Ű������� ����
{
	printf("apple\n");

	if (count == 3) return;  // ȣ�� Ƚ���� 3�̸� ��ȯ�ϰ� ����
	
	/*
	return�� count-1 �϶��� �Լ��� �Ѿ
	apple  // count 1
	apple  // count 2
	apple  // count 3
	jam    // count 2
	jam    // count 1
	*/
	
	fruit(count + 1);        // ��ȣ���Ҷ� ȣ��Ƚ���� 1 ����
	
	printf("jam\n");
}