#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
ù��° ������ �Է��ϰ� ���͸� �Է��ϴµ�,
�̶� a+���Ͱ� �����ֱ⶧���� b���� ���͸� �Է¹޾Ƽ� ȣ��Ǽ� ����� �̻��ϰԶ��.
���� ������ �ϳ� ���ܼ� scanf�� �������� ���°��� �ٶ�����

�Ǵ�
getchar()�� ����ϸ��
*/

int main()
{
	int a;
	char b;

	printf("�����ϳ��� �Է��ϼ��� : $");
	scanf("%d", &a);
	
	getchar();  
	printf("�����ϳ��� �Է��ϼ��� : $");
	scanf("%c", &b);
	// scanf(" %c", &b);  // ���۸����� ������ ��ĭ ���� scanf �����ϴ°� ����

	printf("�Էµ� ���� %d �Դϴ�.\n", a);
	printf("�Էµ� ���ڴ� %c�Դϴ�.\n", b);

	return 0;
}

