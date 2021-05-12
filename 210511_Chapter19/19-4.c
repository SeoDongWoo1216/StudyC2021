/*
�̹� ���ǵ� ��ũ��
�̹� ���ǰ��Ǿ��־ ����ڰ� ����ϰų� �ٲ� �� ���� ��ũ���̴�.
__FILE__ : ��ü ���͸� ��θ� ������ ���ϸ�
__FUNCTION__ : ��ũ�θ��� ���� �Լ��̸�
__LINE__ : ��ũ�θ��� ���� �� ��ȣ
__DATE__ : �������� ������ ��¥
__TIME__ : �������� ������ �ð�
*/

#include<stdio.h>

void func(void);

int main() 
{
	printf("������ ��¥�� �ð� : %s, %s\n\n", __DATE__, __TIME__);
	printf("���ϸ� : %s\n", __FILE__);
	printf("�Լ��� : %s\n", __FUNCTION__);
	printf("���ȣ : %d\n", __LINE__);

#line 100 "macro.c"  // �� ��ȣ�� 100���� �����ϰ� ���ϸ��� macro.c�� ǥ��
	func();          // ���⼭���� �� ��ȣ�� 100���� ����

	return 0;
}

void func(void) 
{
	printf("\n");
	printf("���ϸ� : %s\n", __FILE__);
	printf("�Լ��� : %s\n", __FUNCTION__);
	printf("���ȣ : %d\n", __LINE__);
}