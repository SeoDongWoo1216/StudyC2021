/*
#define�� ����� ��ũ�� �Լ�
��ũ���Լ��� �μ��� ���� ���� �ٸ� ������� ������ ġȯ�ȴ�.
�Լ��� �ƴ����� �μ����ְ� �Լ�ó�� �� �� �ִ�.

#define ��ũ��_�Լ���(�μ�) ġȯ�ɺκ�
*/

// ��ũ�� �Լ��� ����� ���α׷�
#include<stdio.h>
#define SUM(a,b) ((a) + (b)) // �ִ��� ��ȣ���Ἥ ���ۿ��� �ٿ�����
#define MUL(a,b) ((a) * (b))
#define test(a) (a*10)

int main() 
{
	int a = 10, b = 20;
	int x = 30, y = 40;
	int res;

	printf("a + b = %d\n", SUM(a, b));  // a + b
	printf("x + y = %d\n", SUM(x, y));  // x + y
	res = 30 / MUL(2, 5);               // 30�� 2*5�� ����
	printf("res : %d\n", res);

	printf("%d\n", test(10));
	printf("%d\n", test( (a+10) ));  // 200�� �ǵ��ߴµ� define�� ��ȣ���Ⱥ��̸� 110�� ���ü�������
	return 0;
}