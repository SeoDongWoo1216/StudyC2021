#include<stdio.h>

int main() 
{
	int a = 20, b = 3;
	double res;

	res = ((double)a) / ((double)b);         // (double)�� �̿��� a, b�� �Ǽ��� ����ȯ
	printf("a = %d, b = %d\n", a, b);
	printf("a / b�� ��� : %.1lf\n", res);

	a = (int)res;                            // (int)�� �̿��� res�� ������ ���� �κи� ����
	printf("(int) %.1lf�� ��� : %d\n", res, a);

	printf("--------------------------------------------\n");

	// ����
	// ���׿��ִ� ���� ����ȯ �� �� ����.

	// double c = 10.5, d = 3.5;
	// int res2;          // int�� �������µ�
	// (double)res2 = c + d;      // ���� double�� �����ؼ� double�� ����ȯ�Ϸ�����
	                   // �̷����� int���ʰ��ؼ� �޸� �Ҵ�ɼ����ֱ⶧���� ������
	// printf("%.1lf", res2);

	return 0;
}