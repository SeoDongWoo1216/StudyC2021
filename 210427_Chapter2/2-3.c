#include <stdio.h>

int main() 
{
	// ������� ����� �����ϱ����� ''�� �־�����
	printf("Be happy\n");
	printf("12345678901234567890\n");
	printf("My'\t'friend\n");
	printf("Goot\bd'\t'chance\n");   // \b������ Goot�� Good���� ��µ� 
	printf("Cow\rW\a\n"); // \r�� ���� Cow�� Wow�� ���

	/* 
	�����(�̽������� ������) 
	: ���ڴ� �ƴ����� ��¹�Ŀ� ������ �ִ� ����
	
	\n : ����(����ó��)
	\t : �鿩����(Tabó��)
	\b : �齺���̽�ó��
	\r : �� ������ �̵�
	\a : ���Ҹ�(alart) ȣ��
	*/

	return 0;
}