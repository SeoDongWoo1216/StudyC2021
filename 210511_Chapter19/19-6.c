/*
���Ǻ� ������ ������
��ó�� �����ڸ� �پ��� ������� �����Ͽ� ����� �� �ִ�
*/

// #if, #ifdef, #else, #endif�� ����� ���Ǻ� ������
#include <stdio.h>
#define VER 7    // ġȯ�� �κ��� �ִ� ��ũ�θ� ����
#define BIT16    // ġȯ�� �κ��� ���� ��ũ�θ� ����

int main() 
{
	int max;

#if VER >= 6                          // ��ũ�θ� VER�� 6 �̻��̸�
	printf("���� %d�Դϴ�.\n", VER);  // VER ��� 
#endif                                // #if�� ��

#ifdef BIT16                          // ��ũ�θ� BIT16�� ���ǵǾ�������
	max = 32767;                      // �� ���� ������
#else                                 // BIT16�� ���ǵǾ� ���� ������
	max = 2147483647;                 // �� ���� ������
#endif                                // #ifdef�� ��

	printf("int�� ������ �ִ밪 : %d\n", max); // max ���

	return 0;
}