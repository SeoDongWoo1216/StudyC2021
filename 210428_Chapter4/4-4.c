// ����ǥ��, ����ǥ���� �������� �˾ƺ��� ����

#include <stdio.h>
int main() 
{
	int a = 5, b = 5;
	int pre, post;

	pre = (++a) * 3;
	post = (b++) * 3;

	printf("�ʱⰪ a = %d\n", a);
    printf("�ʱⰪ b = %d\n\n", b);

	printf("������ : (++a) * 3 = %d\n", pre);  // a�� ++�ؼ� 6*3�̵�
	printf("������ : (b++) * 3 = %d\n\n", post); // b*3���ϰ� b�� ++����
	
	printf("%d", b); // ���ٿ��� b�� 5*3 ������������ ���� b�� ����ϸ� 6�̳���

	return 0;
}