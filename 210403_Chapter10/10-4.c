// �������� ������ ���� ����

#include<stdio.h>

int main() 
{
	int ary[5] = { 10,20,30,40,50 };
	int* pa = ary;				     // ù��° �迭 ��� �ּ�
	int* pb = pa + 3;                // �׹�° �迭 ��� �ּ�
	// �̶� pb�� ary[0]�� pa����  +3�� ���� ary[4]����

	printf("pa : %u\n", pa);
	printf("pb : %u\n\n", pb);

	pa++;                               // pa++�� ���� pa�� 0���� -> 1�������� �̵�
	printf("pb - pa : %u\n", pb - pa);  // 3���� - 1�����̴� 2�� ����
	
	printf("�տ� �ִ� �迭 ����� �� ��� : ");
	if (pa < pb) printf("%d\n", *pa);
	else printf("%d\n", *pb);

	return 0;
}