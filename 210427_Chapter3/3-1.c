#include<stdio.h>

int main(void) 
{
	// �������� ����( {}�ȿ����� ����ϴ� ���� )
	// ���������� �߰����ص������� �����ϸ��� ��������������ϱ�
	// �������̸� ���������� ���������ϴ°����� ��������.

	int a;       // int�� ���� a ����
	int b, c;    // 2���� int�� ���� b, c�� ���ÿ� ����
	double da;   // double�� ���� da ���� 
	char ch;     // char�� ���� ch ����

	a = 10;      // int�� ���� a�� ���� 10 ����
	b = a;       // int�� ���� a�� ���� a�� �� ����
	c = a + 20;  // int�� ���� a�� ���� a�� ���� ���� 20�� ���� �� ����
	da = 3.5;    // double�� ���� da�� �Ǽ� 3.5 ����
	ch = 'A';    // char�� ���� ch�� ���� 'A'����

	printf("���� a��  �� : %d\n",     a);
	printf("���� b��  �� : %d\n",     b);
	printf("���� c��  �� : %d\n",     c);
	printf("���� da�� �� : %.1lf\n", da);
	printf("���� ch�� �� : %c\n",    ch);

	printf("-----------------------------------------\n");

	// �����ϸ��� ũ�Ⱑ �ٸ��⶧���� sizeof �����ڷ� �� �ڷ����� ũ�⸦ �� �� �ִ�.
	printf("char   ũ�� : %d\n", sizeof(char));
	printf("short  ũ�� : %d\n", sizeof(short));
	printf("int    ũ�� : %d\n", sizeof(int));
	printf("double ũ�� : %d\n", sizeof(double));
	printf("long   ũ�� : %d\n", sizeof(long));

	return 0;
}