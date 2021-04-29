#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int score[5];
	int i;
	int total = 0;
	double avg;        
	int count;                      // 배열 요소의 개수를 저장할 변수
	
	printf("sizeof(score) 크기      : %d\n", sizeof(score));
	printf("sizeof(score[0])의 크기 : %d\n", sizeof(score[0]));

	count = sizeof(score) / sizeof(score[0]);  // 배열 요소의 개수 계산
	// 이렇게 동적으로 코드를 짜야 고급스러운 코드가 되는것임

	for (i = 0; i < count; i++)     // 11행에서 계산한 count만큼 반복
	{
		scanf("%d", &score[i]);
	}

	for (i = 0; i < count; i++)     // 11행에서 계산한 count만큼 반복 
	{
		total += score[i];
	}

	avg = total / (double)count;    // 총합을 count로 나누어 평균 계산(int / int형이기때문에 double로 강제형변환(하나만 해도 자동으로형변환이됨))

	for (i = 0; i < count; i++)     // 11행에서 계산한 count만큼 반복
	{
		printf("%4d", score[i]);   
	}
	printf("\n");

	printf("평균 : %.1lf\n", avg);
	
}