#include<stdio.h>
int main()
{
	float ft = 1.234567890123456789;   // ��ȿ ���ڰ� ���� ������ �ʱ�ȭ
	double db = 1.234567890123456789;

	// ���� ó�� ������ ������ �� �Ĵ� �����Ⱚ�� ��µȴ�.
	printf("float��  ������ �� : %.20f\n", ft); // �Ҽ��� ���� 20�ڸ����� ���
	printf("double�� ������ �� : %.20lf\n", db);

	printf("float��  ũ�� : %d\n", sizeof(float));
	printf("double�� ũ�� : %d\n", sizeof(double));
}