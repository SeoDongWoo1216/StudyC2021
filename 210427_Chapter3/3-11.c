// �迭 �̸� ��ü�� �ּҸ� ��Ÿ���⶧����
// �迭�� scanf�� ������ &�� �־����� �ʾƵ���.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char grade;           // ������ �Է��� ����
	char name[20];        // �̸��� �Է��� �迭

	printf("���� �Է� : "); 
	scanf("%c", &grade);  // grade ������ ���� ���� �Է�(A, B, C, D������)

	printf("�̸� �Է� : ");
	scanf("%s", name);   // name �迭�� �̸� ���ڿ� �Է�(&�����ص���)

	printf("%s�� ������ %c�Դϴ�.\n", name, grade);

	return 0;
}

