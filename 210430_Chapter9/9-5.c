// 32��Ʈ �������� �����ϰ��ִ°���.
// x64�� �ٲٸ� �޸�ó���� �� Ŀ���⶧���� �ּ��� ũ�Ⱑ 8����Ʈ�� �þ.

#include<stdio.h>

int main() {
	char ch;
	int in;
	double db;

	char* pc = &ch;
	int* pi = &in;
	double *pd = &db;

	// �ּ� ũ��� �׻� 4����Ʈ
	printf("char��   ������ �ּ� ũ�� : %d\n", sizeof(&ch));
	printf("int��    ������ �ּ� ũ�� : %d\n", sizeof(&in));
	printf("double�� ������ �ּ� ũ�� : %d\n\n", sizeof(&db));

	// �������� ũ��� �׻� 4����Ʈ
	printf("char *   �������� ũ�� : %d\n", sizeof(pc));
	printf("int *    �������� ũ�� : %d\n", sizeof(pi));
	printf("double * �������� ũ�� : %d\n\n", sizeof(pd));

	// ������ ũ��� ������ Ÿ�Կ����� �ٸ��� ���
	printf("char *   �����Ͱ� ����Ű�� ������ ũ�� : %d\n", sizeof(*pc));
	printf("int *    �����Ͱ� ����Ű�� ������ ũ�� : %d\n", sizeof(*pi));
	printf("double * �����Ͱ� ����Ű�� ������ ũ�� : %d\n\n", sizeof(*pd));

	return 0;
}