#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
	int age;
	char name[20];

	printf("���� �Է� : ");
	scanf("%d", &age);
	fgetc(stdin);
	printf("�̸� �Է� : ");
	gets(name);
	printf("\n���� : %d\n�̸� : %s\n", age, name);

	return 0;
}
/*
���ۿ��� ���� ���ڸ� ������ �Է��� �����Ƿ� Ű����� �̸��� �Է��ϴ� ������ �����Ǹ鼭 name �迭�� ù��° ��ҿ��� null���ڰ� ����Ǿ ����̾ȵȴ�.
�� ������ �Է� �Լ����� ���۸� �����ؼ� ����� ���̹Ƿ� �ʿ��Ҷ� ������ ������ �������Ѵ�.

�̷��� ����ϴ� ���� ���ڸ� �о���̴� ���� �Է� �Լ��� ȣ���ϸ� �ȴ�.
scanf("%*c");, getchar(), fgetc(stdin);

scanf() , getchar(), gets
printf(), putchar(), puts()
*/

