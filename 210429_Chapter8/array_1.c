#include <stdio.h>

int main()
{
	int i;
	int ary[5] = { 10, 20, 30, 40, 50 };         // int형 5개의 방을가진 배열선언
	int arysize = sizeof(ary) / sizeof(ary[0]);  // 배열의 방 개수를 구하는 변수
	// 배열의 전체사이즈 / 배열의 방 하나의 크기 => arysize = 5

	/*
	배열 방의 개수를 동적으로 구하는 법 : 전체사이즈 / 배열 요소 하나의 크기
	int ary2[7] = { 1, 2, 3, 4, 5, 6, 7 };
	int ary2size = sizeof(ary2) / sizeof(ary2[0]);
	printf("%d", ary2size);
	*/


	for (i = 0; i < arysize; i++) 
	{
		printf("ary[%d] = %d\n", i, ary[i]);
	}

	printf("\n");

	for (i = arysize-1; i >= 0; i--)
	{
		printf("ary[%d] = %d\n", i, ary[i]);
	}

	return 0;
}