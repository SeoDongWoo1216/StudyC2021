#include <stdio.h>

int main() {
	int a = 1;                   // ���� ���� �� 1�� �ʱ�ȭ
	int i;                       // �ݺ� Ƚ���� ���� ���� ����

	for (i = 0; i < 3; i++)      // i�� 0���� �ʱ�ȭ �� �Ŀ� 3���� ��������
								 // 1�� �����ϸ鼭 ����ȴ�.
	{
		printf("%d\n", i);
		a = a * 2;
	}

	printf("\n%d\n", i);
	printf("a : %d\n", a);       // for���� ���������� a �� ���

	return 0;
}