/*
	
	

*/

#include <stdio.h>

int main() 
{
	int a = 10;
	int* pa = &a;
	printf("%p %p\n", &a, pa);
	printf("====================================\n");

	int iAry1[2] = { 1, 2 };
	// int* piAry1 = Ary1;			
	int (*piAry1) = iAry1;						// ���� �ڵ�� ����(������������ ()�� ���ִ°� ����)
	printf("int�� 1���� �迭\n");
	printf("%p %p\n", iAry1, piAry1);           // �ּҰ� �����Ƿ� �����Ϳ����� �迭���� �����
	printf("%p %p\n", iAry1 + 1, piAry1 + 1);	// int���̹Ƿ� + 4�� ��
	printf("====================================\n");

	char cAry2[2] = { 'A', 'B' };
	char* pcAry2 = cAry2;
	printf("char�� 1���� �迭\n");
	printf("%p %p\n", cAry2, pcAry2);
	printf("%p %p\n", cAry2 + 1, pcAry2 + 1);   // char���̹Ƿ� + 1�� ��
	printf("====================================\n");

	int iAry3[][2] = { {1, 2}, {3, 4} };		// 2���� �迭�϶�
	//int* piAry3 = iAry3;
	//printf("%p %p\n", iAry3, piAry3);			// ���� �ּҰ��� ������
	//printf("%p %p\n", iAry3 + 1, piAry3 + 1); // ������ ������������ ����� �ٸ���.

	int (*piAry3)[2] = iAry3;					// int���� +2 ��ŭ ������ �� �ֵ�������
	printf("int�� 2���� �迭\n");
	printf("%p %p\n", iAry3, piAry3);		    // ���� �ּҰ��� ������
	printf("%p %p\n", iAry3 + 1, piAry3 + 1);	// ������ ���������� ���� ��� ���									
	printf("====================================\n");

	char *cAry4[2] = {"hi", "good"};            // ������ �迭(1���� �迭������ �����Ͱ������Ƿ�)
	//char *pcAry4 = cAry4;					    // ������ 1�������� �����Ϳ��� �� �ּҰ� �ٸ��� ��µ�
	char** pcAry4 = cAry4;					    // ������ �迭�̹Ƿ� 2�������͸� ����ؾ���
	printf("char�� 2���� �迭\n");
	printf("%p %p\n", cAry4, pcAry4);
	printf("%p %p\n", cAry4 + 1, pcAry4 + 1);   // (2���������϶�)�ּҰ� �����ϰ� ���

	return 0;
}