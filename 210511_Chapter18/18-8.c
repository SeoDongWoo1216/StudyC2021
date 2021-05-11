// �������� ������ �Է��Ͽ� �� �ٷ� ���
// a.txt ������ ������ b.txt�� ���๮�ڸ� �����ؼ� ����Ǽ� ����ȴ�.
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() 
{
	FILE* ifp, * ofp;                  // ���� ������ ����
	char str[80];                      // �Է��� ���ڿ��� ������ �迭
	char* res;                         // fgets �Լ��� ��ȯ���� ������ ����

	ifp = fopen("a.txt", "r");         // �Է� ������ �б� �������� ����
	if (ifp == NULL)                   // ���� ���� Ȯ��
	{
		printf("�Է� ������ ���� ���߽��ϴ�.\n");
		return 1;
	}

	ofp = fopen("b.txt", "w");         // ��� ������ ���� �������� ����
	if (ofp == NULL)                   // ���� ���� Ȯ��
	{
		printf("��� ������ ���� ���߽��ϴ�.\n");
		return 1;
	}

	while (1)                          // ���ڿ��� �Է��ϰ� ����ϴ� ���� �ݺ�
	{
		res = fgets(str, sizeof(str), ifp);
		if (res == NULL)               // ��ȯ���� �� �����͸� �ݺ� ����
		{
			break;
		}
		str[strlen(str) - 1] = '\0';   // ���� ���� ����
		fputs(str, ofp);
		fputs(" ", ofp);
	}

	fclose(ifp);     // �Է� ���� �ݱ�
	fclose(ofp);     // ��� ���� �ݱ�

	return 0;
}