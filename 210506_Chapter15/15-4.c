// �ּҷ� ���̴� �迭��� �迭�� �ּ� ��

#include<stdio.h>

int main() 
{
	int ary[5];

	printf("  ary�� �� : %u\t", ary);      // �ּҷμ��� �迭���� ��
	printf("ary�� �ּ� : %u\n", &ary);     // �迭�� ��ü�� ���� �ּ�
	printf("   ary + 1 : %u\t", ary + 1);  // 1�� int���̹Ƿ� �ּҰ� + 4�� �Ǿ ���
	printf("  &ary + 1 : %u\n", &ary + 1); // �ּ� ������ �迭 ��ü���� +�ؼ� ���(+ 20�� ��)

	return 0;
}