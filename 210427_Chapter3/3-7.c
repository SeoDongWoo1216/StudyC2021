#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> // ���ڿ��� �ٷ������ string.h ��� ���� ����


int main() 
{
	char fruit[20] = "strawberry";  // ���� �迭�� strawberry�� �ʱ�ȭ
	 
	printf("%s\n", fruit);          // strawberry ���
	strcpy(fruit, "banana");        // fruit�� banana ����
	printf("%s\n", fruit);

	// strcpy�� string copy�� ���Ӹ���, ���ڿ��� ������.

	return 0;
}