#include <stdio.h>

void fruit(int count);

int main(void) 
{
	fruit(1);					// ó�� ȣ���ϹǷ� 1�� �μ�����

	return 0;
}

void fruit(int count)			// ȣ�� Ƚ���� �Ű������� ����
{
	printf("apple\n");
	if (count == 3) return;     // ȣ�� Ƚ���� 3�̸� ��ȯ�ϰ� ����
	fruit(count + 1);           // ��ȣ���Ҷ� ȣ��Ƚ���� 1 ����
}