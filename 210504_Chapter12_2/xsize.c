// ���ĺ��Է������� �ҹ��ڸ� �Է��ϸ� �빮�ڸ� ���

// A~Z : 65~90
// a~z : 97~122

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
	char input = '\0';
	int size = 'a' - 'A';
	while (1) 
	{
		printf("���ĺ� �ϳ��� �Է����ּ���(!�Է½� ����) : ");
		scanf(" %c", &input);

		if (input <= 90 && input >= 65)					// �빮��(65~90)�� �Է¹�����
		{
			input += size;
			printf("�ҹ��ڷ� ��ȯ : %c\n\n", input);
		}
		else if (input <= 122 && input >= 97)		    // �ҹ���(97~122)�� �Է¹�����
		{
			input -= size;
			printf("�빮�ڷ� ��ȯ : %c\n\n", input);
		}
		else if (input == 33)						    // ����ǥ(�ƽ�Ű�ڵ�33)�� �Է¹����� 
		{
			printf("�����մϴ�\n\n");
			break;
		}
		else
		{
			printf("\n���ĺ��� �Է����ּ���\n\n");
		}
	}
	
	
}