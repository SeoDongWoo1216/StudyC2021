/*
������ �迭 : �����͸� ��Ƴ��� '�迭'
�迭 ������ : �迭�� ����Ű�� '������'
*/

#include <stdio.h>

int main() 
{
	char* pary[5];					// ������ �迭 ����. pointer�� array�� ���� pary
	int i;							// �ݺ� ���� ����

	pary[0] = "dog";				// �迭 ��ҿ� ���ڿ� ����
	pary[1] = "elephant";
	pary[2] = "horse";
	pary[3] = "tiger";
	pary[4] = "lion";

	for (i = 0; i < 5; i++) 
	{
		printf("%s\n", pary[i]);
	}

	return 0;
}