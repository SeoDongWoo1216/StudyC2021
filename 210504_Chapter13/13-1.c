/*  ���� ����
���� ������ ��� ������ ��� ���η� ���ѵǹǷ� �ٸ� �Լ������� ����� �� ����.
=> �̷��� �����͸� ���
*/

#include <stdio.h>

void assign(void);

int main() 
{
	auto int a = 0;					    // ���� ���� ����� �ʱ�ȭ, auto�� ���� ����

	assign();							// �Լ� ȣ��
	printf("main �Լ� : %d\n", a);

	return 0;
}

void assign(void)
{
	int a;								// main �Լ��� �ִ� ������ ���� �̸��� ���� ����, auto ����

	a = 10;							    // assign �Լ� �ȿ� ����� a�� ���� 
	printf("assign �Լ� a : %d\n", a);  // assign �Լ��� ����� a �� ���
}