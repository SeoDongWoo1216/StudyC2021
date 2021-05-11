/*
������
������ ������ �� �ִ� ���� ���� ��ȣ�� �����Ͽ� �����Ѵ�.
1�������ϴ� ���ӵ� �ñ׳��� �ʿ��Ҷ� enum�� �����.
������ ���°ͺ��� case SPRING: ó�� ���ڿ��� ������ָ� ��������忡�� �������� ������ �� �ִ�.

����� ���� �Լ�(�򰥸��� ����ü�� ������)
����ü, ����ü, ������
(struct, union, enum)
*/

#include<stdio.h>

enum season { SPRING, SUMMER, FALL, WINTER };

int main()
{
	enum season ss;     // ������ ���� ����
	char* pc = NULL;    // ���ڿ��� ������ ������

	// ss = SPRING;     // ���� ����� �� ����(�����δ� ������ ��)
	ss = SUMMER;

	switch (ss)         // ���� ��� �Ǵ�
	{
		case SPRING:
			pc = "inline";
			break;
		case SUMMER:
			pc = "swimming";
			break;
		case FALL:
			pc = "trip";
			break;
		case WINTER:
			pc = "skiing";
			break;
	}
	printf("���� ���� Ȱ�� => %s\n", pc);  // ���õ� ���ڿ� ���


	enum season s3;
	printf("%dByte\n", sizeof(s3));        // enum�� ũ�� ���(4����Ʈ�� ����������)
	printf("%d %d %d %d", SPRING, SUMMER, FALL, WINTER);  // enum ��� �� ���(������ �ʱ�ȭ�����ָ� 0,1,2,3 ���� ����ȭ�� �ȴ�)
	                                                      // ���� enum season���� FALL = 100���� �ʱ�ȭ�ϸ� 0, 1, 100, 101�� ��µ�.
	return 0;
}