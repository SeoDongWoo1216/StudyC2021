/*
���� �����ؼ� �����ϴ� ���(call by value)
*/
#include <stdio.h>

void add_ten(int a);

int main() 
{
	int a = 10;

	add_ten(a);				 // a���� �����Ͽ� ����
	printf("a : %d\n", a);

	return 0;
}

void add_ten(int a)			 // main�� �ִ� a�� �ٸ� �������� ���� ������ �Ҵ�����
{
	a = a + 10;				 // main���� �޾ƿ� �Ű����� a�� 10�� ������
							 // �ٵ� �Լ��� �����⶧���� 20�� �����ִ� a�� �Ҹ��
}