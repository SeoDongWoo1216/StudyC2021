#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int input = 0;					// �Է¹��� ����
	int i, j = 0;					// ������ for���� �� ����
	int repeatNum = 1;
	
	printf("---------------------------------------------\n");
	printf("���������α׷�\n");
	printf("---------------------------------------------\n");
	printf("����� �������� �Է��ϼ���(1~9��) : ");
	scanf("%d", &input);

	if (input >= 1 && input <= 9)
	{
		printf("%d���� ����մϴ�\n", input);
		for (i = 1; i < 10; i++)
		{
		    printf("%d * %d = %d\n", input, i, input * i);
		}
	}
	else
	{
		printf("1���� 9������ ���ڸ� �Է����ּ���");

	}
	/*while (repeatNum) 
	{
		printf("---------------------------------------------\n");
		printf("���������α׷�\n");
		printf("---------------------------------------------\n");
		printf("����� �������� �Է��ϼ���(1~9��) : ");
		scanf("%d", &input);

		if (input >= 1 && input <= 9) 
		{
			for (i = 1; i < 10; i++)
			{
				printf("%d���� ����մϴ�", input)
				printf("%d * %d = %d\n", input, i, input * i);
			}
		}
		else 
		{
			printf("1���� 9������ ���ڸ� �Է����ּ���");
			
		}
		
		printf("\n");
		int nextRepeat = 0;
		printf("���� ���� �Է��Ͻðڽ��ϱ�?(1:�� �Է� 0:����) : ");
		scanf("%d", &nextRepeat);
		
		if (nextRepeat == 0) 
		{
			printf("���α׷��� �����մϴ�.");
			repeatNum = 0;
		}
		printf("\n");
	}*/

}