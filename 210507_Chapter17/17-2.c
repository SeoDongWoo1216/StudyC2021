#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct profile 
{
	char name[20];  // �̸�(�迭�� ����ü ����� �� �� �ִ�)
	int age;		// ����
	double height;  // Ű
	char* intro;    // �ڱ�Ұ��� ���� ������
};

int main() 
{
	struct profile yuni;

	strcpy(yuni.name, "������");			// name �迭 ����� �̸� ����
	yuni.age = 17;							// age ����� ���� ����
	yuni.height = 169.1;				    // height ����� Ű ����

	yuni.intro = (char*)malloc(80);			// �ڱ�Ұ��� ������ ���� ���� �Ҵ�
	printf("�ڱ� �Ұ� : ");
	gets(yuni.intro);						// �Ҵ��� ������ �ڱ�Ұ� �Է�

	printf("�̸� : %s\n", yuni.name);		// �� ����� ������ ���
	printf("���� : %d\n", yuni.age);
	printf("Ű : %.1lf\n", yuni.height);
	printf("�ڱ�Ұ� : %s\n", yuni.intro);
	free(yuni.intro);						// intro�� ���� �Ҵ��� �޾����Ƿ� �޸� ��ȯ


	return 0;
}