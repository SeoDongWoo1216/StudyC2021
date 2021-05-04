// 2차원 char 배열
/*
하나의 문자열을 저장하기위해서 1차원 char 배열이 필요하고,
여러개의 문자열을 저장하려면 1차원 char배열이 여러개 필요합니다.

2차원 char 배열은 여러개의 문자열을 처리할때 사용한다.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
	char animal[5][20]; // 2차원 char 배열 선언
	int i;				// 반복 제어 변수
	int count;			// 행의 수를 저장할 변수

	count = sizeof(animal) / sizeof(animal[0]);   // 행의 수 계산( 전체(100) / 0번방의 크기(20) = 5 )

	printf("%d", count);
	// 문자열 입력
	for (i = 0; i < count; i++) 
	{
		scanf("%s", animal[i]);
	}

	// 문자열 출력
	for (i = 0; i < count; i++) 
	{
		printf("%s ", animal[i]);
	}

	return 0;
}

