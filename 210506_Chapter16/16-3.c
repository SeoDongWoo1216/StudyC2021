/*
(456p~459p)
calloc  : �Ҵ��� ���� ������ 0���� �ʱ�ȭ
realloc : �Ҵ��� �޸𸮰����� �ø��ų� ���϶� ���

calloc�� �޸𸮸� �������� �Ҵ��Ͽ� 0���� �ʱ�ȭ�� �޸� ������ ������ ���.
void *calloc(unsigned int, unsigned int);

�޸� �����Ҵ��Ҷ� �����Ϳ� �°� ����������, ������ ũ�Ⱑ �ʹ� ũ�ų� �������ִµ�, �̶� realloc�Լ��� ����Ѵ�.
void *realloc(void*, unsigned int);
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int* pi;			// �Ҵ��� ���� ������ ������ ������
	int size = 5;		// �� ���� �Ҵ��� ���� ������ ũ��, int�� ���� 5����
	int count = 0;		// ���� �Էµ� ��� ����
	int num;			// ����� �Է��� ����
	int i;				// �ݺ� ���� ����

	//int* pi_back;		// �޸� ���������� ����� �ּҸ� ���� �ӽ� ����

	pi = (int*)calloc(size, sizeof(int));	// 5���� ������� �Ҵ�
	while (1) 
	{
		printf("����� �Է��ϼ��� => ");
		scanf("%d", &num);

		if (num <= 0)						// 0 �Ǵ� �����϶� while�� ����
		{
			break;
		}

		if (count == size)					// ���� ������ ��� ���������
		{
			size += 5;						// ��ũ�⸦ �÷��� �� �Ҵ��  
											// NULL �����͸� �ӽ÷� �����ߴ� �ּҰ��� pi�� ����־����.
											// �޸� ���������� ��� �ʿ��� �ڵ���.

			// pi_back = pi;					// �޸� ������ ����ؼ� �ӽ÷� ����� �ּҰ�
								
			pi = (int*)realloc(pi, size * sizeof(int));	  // realloc�� ���� �޸𸮰��� ���Ҵ�

			//if (pi == NULL)					// NULL�������϶� 
			//{
			//	pi = pi_back;				// ����� �ּҸ� pi�� ���Խ�����.
			//}
		}

		pi[count++] = num;
	}

	for (i = 0; i < count; i++)				// ���������
	{
		printf("%5d", pi[i]);
	}
	free(pi);

	return 0;
}