#include <stdio.h>

void print_str(char** pps, int cnt);

int main() 
{
	char* ptr_ary[] = { "eagle","tiger","lion","squirrel" }; // �迭���� �ּ�(������)
	int count;

	count = sizeof(ptr_ary) / sizeof(ptr_ary[0]);
	print_str(ptr_ary, count);

	return 0;
}

void print_str(char** pps, int cnt)
{
	int i;

	for (i = 0; i < cnt; i++)
	{
		printf("%s\n", pps[i]);
	}
}

/*
int ary[10];     // 1���� �迭 -> ������ ���
char ary[10];    // 1���� �迭 -> ������ ���

int ary[10][10]  // 2���� �迭 -> 2�� �����ͻ��
char *ary[10]    // 1���� �迭�ε� �ڷ����� ������ -> 2�� �����ͻ��
*/