#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

extern int count;         // 19-9_main.c 파일의 전역 변수 count 공유
int total = 0;            // 전역 변수 선언

int input_data(void) 
{
	int pos;              // 자연수 저장

	while (1) 
	{
		printf("양수 입력 : ");
		scanf("%d", &pos);   // 자연수 입력
		if (pos < 0) break;  // 만약 음수면 종료
		count++;             // 개수 증가
		total += pos;        // 입력값을 전역 변수 total에 누적
	}

	return total;            // 전역 변수 total의 값 반환
}