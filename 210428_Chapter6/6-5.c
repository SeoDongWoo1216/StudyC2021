// break�� continue ��
#include<stdio.h>

int main() 
{
	int i;						// �ݺ� Ƚ���� ���� ���� ���� ����
	int sum = 0;				// 1~10���� ���� ������ ����

	for (i = 1; i <= 10; i++)
	{
		sum += i;				// i�� 1~10���� �����ϸ鼭 10�� �ݺ�
		if (sum > 30) break;	// ������ ���� 30���� ũ�� �ݺ����� ����
	}
	
	printf("������ �� : %d\n", sum);
	printf("���������� ���� �� : %d\n", i);

	return 0;
}