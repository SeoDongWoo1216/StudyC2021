#include <stdio.h>

void my_gets(char* str, int size);

int main() 
{
	char str[7];								// ���ڿ� ����

	my_gets(str, sizeof(str));					// �� ���� ���ڿ��� �Է��ϴ� �Լ�
	printf("�Է��� ���ڿ� : %s\n", str);

	return 0;
}

void my_gets(char* str, int size)				 // str�� char�迭, size�� �迭�� ũ��
{
	int ch;										 // getchar �Լ��� ��ȯ���� ������ ����
	int i = 0;                                   // str �迭�� ÷��

	ch = getchar();                              // ù��° ���� �Է�
	while ((ch != '\n') && (i < size - 1))		 // �迭�� ũ�⸸ŭ �Է� (ch���� ���๮�ڰų� ������ - 1�̸� while�� ��������)
	{     
		str[i] = ch;             // �Է��� ���ڸ� �迭�� ����
		i++;                     // �ε���(�迭 ���) ����
		ch = getchar();          // ���ο� �����Է�
	}

	str[i] = '\0';               // �迭�� �� ���� �Է��� ���ڿ��� �������� �˸��� NULL ���� ����
}