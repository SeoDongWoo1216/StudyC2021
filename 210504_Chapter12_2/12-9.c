/*
���ϴ� ������ ���ڸ� �����ϴ� strncpy �Լ� : ���������� �ǵ帱 �� �ִ� �޸� ������ ����Ҷ�
strncpy(������� �迭��, ������ ���ڿ�, ������ ���ڼ�)

����!! �������� apple tree���� apple�� �ٲ��� ��������µ�, apple�� ���̵����Ҷ���
apple�� ������ �Ŀ� �� ���ڸ� ������ �����ؾ��Ѵ�.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() 
{
	char str[20] = "mango tree";    // �迭 �ʱ�ȭ

	strncpy(str, "apple-pie", 5);   // "apple-pie"���� �ټ� ���ڸ� ����("apple" �� �����)
	// str[5] = '\0';					// �ι���(\0)�� �־��ָ� apple���� ��µȴ�.
	printf("%s\n", str);            // "mango tree" -> "apple tree" ���

	return 0;
}