/* ���ڿ� ���̸� ����ϴ� strlen �Լ�
strlen(str);   // str�� ũ�⸦ Ȯ���� �迭��
�迭�� ����� ���ڿ��� ���� ���̸� �˰� ������ strlen �Լ��� ����Ѵ�.

sizeof �����ڿ� strlen �Լ��� ����?
sizeof�� ���� ũ���̱⶧���� �迭�� ����� ���ڿ� ���̿ʹ� ������� �迭 ��ü ũ�⸦ ����Ѵ�.
strlen�� ���� ���̸� return ���ش�.

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>							  // strlen �Լ� ����� ���� �������

int main() 
{
	char str1[80], str2[80];				  // �� ���ڿ��� �Է��� �迭
	char* resp;								  // �ڹ��ڿ��� �� �迭�� ������ �����͡�

	printf("2���� ���� �̸� �Է� : ");		
	scanf("%s%s", str1, str2);				  // 2���� ���ڿ� �Է�
	if (strlen(str1) > strlen(str2))		  // �迭�� �Էµ� ���ڿ��� ���� ��
	{
		resp = str1;						  // ù��° �迭�� �� ��� ����
	}
	else 
	{
		resp = str2;						  // �ι�° �迭�� �� ��� ����
	}
	printf("�̸��� �� ������ : %s\n", resp);  // ���ڿ��� ��(if���� ���� ���õ�) �迭�� ���
		

	return 0;
}