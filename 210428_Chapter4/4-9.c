// sizeof ������
// �̸��ڿ� ��ȣ�� �ִ°��� �Լ� printf()
// sizeof�� �����ڷν� sizeof a  ó�� ��ȣ�� �������ʾƵ���.
// �ٵ� sizeof(1.5+3.4) ���� ���� ���� �̻��ϰ� �����⶧���� ��ȣ������.

#include<stdio.h>
int main() 
{
	int a = 10;
	double b = 3.4;

	printf("int�� ������ ũ��     : %d\n", sizeof(a));
	printf("int�� ������ ũ��     : %d\n", sizeof a);  // ��ȣ�����.
	printf("double �� ������ ũ�� : %d\n", sizeof(b));
	printf("������ ����� ũ��    : %d\n", sizeof(10));
	printf("������ ����� ũ��    : %d\n", sizeof(1.5 + 3.4)); // �̷���� ��ȣ�� �� �ʿ�
	printf("char �ڷ����� ũ��    : %d\n", sizeof(char));

	return 0;
}