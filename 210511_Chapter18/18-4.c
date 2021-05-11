/*
getchar �Լ��� ���������� stdin�� ����ϹǷ� ǥ�� �Է� ��Ʈ�� ������ ���۸� ���� �Է��Ѵ�.
���� getchar�Լ��� ó�� ȣ��Ǹ� Ű���忡�� �Է��ϴ� �����ʹ� ���� ���ڿ��Բ� stdin ��Ʈ�� ������ ���ۿ� �Ѳ����� ����ȴ�.
*/

// 18-4 ǥ�� ����� ��Ʈ���� ����� ���ڿ� �Է� : getchar, putchar ���
// 18-5 stdin�� stdout�� ����� ���� �����
#include <stdio.h>

int main() 
{
	int ch;              // �Է��� ���ڸ� ������ ����

	while (1) 
	{
		//ch = getchar();  // Ű���忡�� ���� �Է�
		ch = fgetc(stdin);

		if (ch == EOF)   // ��Ʈ�� + Z �� �Է� ����
		{
			break;
		}
		
		//putchar(ch);     // ȭ�鿡 ���� ���
		fputc(ch, stdout);
	}
	return 0;
}