#include <stdio.h>

int main()
{
	int i, j, k, l;


	// printf("--------------------------------\n");

	/*for (i = 0; i < 5; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	for (i = 0; i < 5; i++)
	{
		for (j = 5; j > i; j--)
		{
			printf("*");
		}
		printf("\n");
	}*/

	// printf("--------------------------------\n");
	
	// �Ƕ�̵� �����

	for (i = 0; i < 6; i++) 
	{
		for (k = 5; k > i; k--) 
		{
			printf(" ");
		}
		for (j = 0; j <= i; j++) 
		{
			printf("*");
		}
		for (l = 0; l < i; l++)
		{
			printf("*");
		}
		printf("\n");
	}
	

	for (i = 0; i < 6; i++)
	{
		for (k = 0; k < i+1; k++) {
			printf(" ");
		}
		for (j = 5 - 1; j > i ; j--) 
		{
			printf("*");
		}
		for (l = 5 - 1; l >= i; l--) {
			printf("*");
		}
		printf("\n");
	}




	// 5���� ���������� *****
	// 0���� ����������     *
	return 0;
}