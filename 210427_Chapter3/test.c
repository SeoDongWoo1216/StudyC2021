// �̸� ���� �ּ� �Է��ؼ� ���
// �̸��� 20��
// �ּҴ� 50��
// ���̴� int

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
	/*int age;
	char name[20];
	char addr[300];

	printf("���̸� �Է��ϼ��� : ");
	scanf("%d", &age);

	printf("�̸��� �Է��ϼ��� : ");
	scanf("%s", name);

	printf("�ּҸ� �Է��ϼ��� : ");
	scanf("%[^\n]s", addr);

	printf("����� ���̴� %d�� �Դϴ�.\n", age);
	printf("����� �̸��� %s�Դϴ�.\n", name);
	printf("����� �ּҴ� %s�Դϴ�.\n", addr);*/

	int a;
	char b;

	printf("�����ϳ��� �Է��ϼ��� : $");
	scanf("%d", &a);
	getchar();

	printf("�����ϳ��� �Է��ϼ��� : $");
	scanf("%c", &b);
	// scanf("%c", &b);

	printf("�Էµ� ���� %d �Դϴ�.\n", a);
	printf("�Էµ� ���ڴ� %c�Դϴ�.\n", b);

	return 0;
}

