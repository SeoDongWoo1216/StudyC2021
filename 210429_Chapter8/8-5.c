// ���ڿ��� �������ִ� strcpy �Լ�

#define _CRT_SECURE_NO_WANINGS
#include <stdio.h>   // ���ڿ� ���� �Լ� ������ ��Ƴ��� �������

int main() 
{
	char str1[80] = "cat";
	char str2[80];

	strcpy(str1, "tiger");           // str1 ���Ͽ� "tiger" ����
	strcpy(str2, str1);              // str2 �迭�� str1 �迭�� ���ڿ� ����

	printf("%s, %s\n", str1, str2);

	return 0;
}