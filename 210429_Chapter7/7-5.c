#include<stdio.h>

// �Լ��� ��� ȣ���ϴµ� �� �����Լ����� �� ȣ���ϱ⶧���� ���ѹݺ��� �ȴ�.
// �̶�, �����Ű�� ������ ���������� �ʿ��ϴ�.
void fruit(void);  // �Լ� ����

int main()         // �Լ� ȣ��
{
	fruit();

	return 0;
}

void fruit(void) { // ���ȣ���Լ� ����
	printf("apple\n");
	fruit();       // �ڽ��� �ٽ� ȣ��
}