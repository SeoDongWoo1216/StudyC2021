// ������Ʈ -> (������Ʈ�̸�)�Ӽ� -> C/C++ -> �Ϲ� -> SDL �˻� -> �ƴϿ�
// scanf ���Ȱ��� ������ ������ �� ����

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "user.h"

int main() 
{
	int n1, n2;
	int result;

	input_data(&n1, &n2);  // �ּҰ��� inputData.c�� �Ѱ���
	result = sum(n1, n2);

	printf("�� ������ �� : %d", result);

	return 0;
}