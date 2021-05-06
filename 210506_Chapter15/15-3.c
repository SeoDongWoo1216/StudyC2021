#include <stdio.h>

void print_str(char** pps, int cnt);

int main() 
{
	char* ptr_ary[] = { "eagle","tiger","lion","squirrel" }; // 배열명이 주소(포인터)
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
int ary[10];     // 1차원 배열 -> 포인터 사용
char ary[10];    // 1차원 배열 -> 포인터 사용

int ary[10][10]  // 2차원 배열 -> 2중 포인터사용
char *ary[10]    // 1차원 배열인데 자료형에 포인터 -> 2중 포인터사용
*/