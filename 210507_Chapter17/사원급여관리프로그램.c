/*
	5���� ������̵�, ����̸�, �Ѵ� �޿��� �Է¹޾� ����� ��
	5�� ����� �޿� �Ѿװ� ��� �޿����� ���Ͻÿ�.
	(�̸��� �����Ҵ翡 ����)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct emplayee		// typedef�� ���� struct employee a �� Employee a �� �ٲ㼭 ����� �� ����
{
	int id;					// �����ȣ
	char* name;				// ����̸�
	int salary;				// �޿�
}Employee;

int main() 
{
	Employee a[5] = {0};
	int i = 0;	
	char str[100];
	
	int temp = 0;
	double avg = 0;
	
	for (i = 0; i < 5; i++) 
	{
		printf("�����ȣ : ");
		scanf("%d", &a[i].id);

		printf("����̸� : ");
		scanf("%s", str);
		a[i].name = (char*)malloc(strlen(str) + 1);   // �� ���� ���ڿ���ŭ �����Ҵ� ��
													  // malloc������ str ���ڿ� ���̸�ŭ�� ���� �ּҸ� a[i].name�� ����
		if(a[i].name != NULL) strcpy(a[i].name, str);
		
		printf("�Ѵޱ޿� : ");
		scanf("%d", &a[i].salary);
		printf("\n");

	}
	
	for (i = 0; i < 5; i++) 
	{
		printf("------------%d�� ���------------\n", i);
		printf("%d\n", a[i].id);
		printf("%s\n", a[i].name);
		printf("%d\n", a[i].salary);
		temp += a[i].salary;
	}

	avg = temp / 5;
	printf("--------------------------------\n\n");
	printf("==========================================\n");
	printf("�޿� �Ѿ� : %d\n", temp);
	printf("�޿� ��� : %.2lf\n", avg);
	printf("==========================================\n");

	for (i = 0; i < 5; i++)
	{
		free(a[i].name); //��ȯ(����)
	}
	return 0;
}