/*
ȸ���� ã�� ���α׷� ex)madam

1. �ܾ �Է¹���
2. �ܾ� ���� / 2�� �ؼ� �������� ���� (10���� for�� 5��)
3. �������� ��Ƽ� �ܾ��� ��ó��, �ǳ��� �ܾ ��(�� ������ 2��°, �ǳ�-1 ...)
4. ���δ� ���ؼ� ������ ȸ���̴�. ���
5. �ϳ��� �ٸ��� ȸ���� �ƴմϴ�. ���

*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <string.h>

int what_the_palindrome(char*, int);

int main()
{
	char input[200] = "";   // �迭�� �����Ҷ� �� ������ �������־����.
	int size;

	
	
	while (1) 
	{
		printf("�ܾ �Է�(!�Է½� ����) : ");
		scanf("%s", input);

		size = strlen(input);

		if (input[0] == 33) 
		{
			printf("�����մϴ�");
			exit(1);
		}

		int num = what_the_palindrome(input, size);

		if (num == 1) 
		{
			printf("ȸ���Դϴ�.\n");
		}
		else
		{
			printf("ȸ���̾ƴմϴ�\n");
		}

	}
}

int what_the_palindrome(char*input, int size) 
{
	for (int i = 0; i < size / 2; i++)
	{
		if (input[i] != input[size - 1 - i])
		{
			return 0;
		}
	}
	return 1;
}