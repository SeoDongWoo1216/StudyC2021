/*
��ũ�θ��� ����� #define
#define�� ��ũ�θ��� �����ϴ� ��ó�� �����ڷ� ��ũ�θ��� �ٸ� ������� ���� �����ϱ⽱�� �빮�ڷλ���Ѵ�.
ġȯ�� �κ��� ��ũ�θ�� �ϳ� �̻��� ��ĭ�� �д�.

��ó�� ���ѳ����� �ٲٱ����̳� �ٲ��ĸ� �ᵵ ���������.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 3.14159          // ����� ��ũ�θ����� ����
#define LIMIT 100.0         // ����� ��ũ�θ����� ����
#define MSG "passed!"       // ���ڿ��� ��ũ�θ����� ����
#define ERR_PRN printf("��� ������ ������ϴ�!"); // ��¹��� ��ũ�θ����� ����

int main() 
{
	double radius, area;                           // �������� ���� ����

	printf("�������� �Է��ϼ���(5����) : ");
	scanf("%lf", &radius);                         // ������ �Է�
	area = PI * radius * radius;                   // ���� ���
	if (area > LIMIT)                              // ������ 100�� �ʰ��ϸ� ���� �޼��� ���
	{
		ERR_PRN;                     
	}
	else
	{
		printf("���� ���� : %.2lf (%s)\n", area, MSG);   // ������ �޽��� ���
	}
		
	return 0;
}