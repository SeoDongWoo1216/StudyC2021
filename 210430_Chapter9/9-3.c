/*
	'*' �� ���ɶ��� ����δ� �ܼ��� ��ȣ, ���๮���ִ°� ����������
	pa�� �ּҸ� ������ �������̱⶧���� scanf�������� &�� �Ⱥٿ��൵�ȴ�.
	int�� �����Ϳ��� int����, double�� �����Ϳ��� double������ �ٴ´�.
	������ ���� ��ü�� ũ��� �׻� ���������� 4����Ʈ�̴�.(int��, double �� �Ȱ���)
	=> �ּ��� ���� �������ʱ⶧�� 
*/
#include<stdio.h>

int main() 
{
	int a = 10;
	int b = 15;
	int total;
	double avg;

	int *pa, *pb;       // int�� ������ ����
	int *pt = &total;   // pt�� total�� int�� �����ּҷ� �ʱ�ȭ
	double* pg = &avg;  // pg�� avg��� double�� ������ �����ּҷ� �ʱ�ȭ


	// �����ͺ������� �ּҸ� ����
	pa = &a;  
	pb = &b;


	// �����͸� ������ '*'�� �����.
	*pt = *pa + *pb;   // pa, pb�� ����Ű���ִ� �� ��(a, b)�� ���Ѵ�
	*pg = *pt / 2.0;


	printf("�� ������ ��   : %d, %d\n", *pa, *pb);   // a, b�� ���
	printf("�� ������ ��   : %d\n", *pt);            // total�� ���
	printf("�� ������ ��� : %.2lf\n\n", *pg);       // avg�� ���

	printf("�� ������ ��   : %d, %d\n", a, b);
	printf("�� ������ ��   : %d\n", total);
	printf("�� ������ ��� : %.2lf\n", avg);

	return 0;
}