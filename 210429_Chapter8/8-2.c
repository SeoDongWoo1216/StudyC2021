// 배열과 반복문을 사용한 성적 처리 프로그램
// 배열의 처리를 for문으로 한다는 것을 기억.

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int score[5];
	int i;
	int total = 0;
	double avg;

	for (i = 0; i < 5; i++)          // i가 0부터 4까지 5번 반복
	{
		scanf("%d", &score[i]);      // 각 배열 요소에 성적 입력
	}

	for (i = 0; i < 5; i++)          // 성적을 누적하여 총점 계산
	{
		total += score[i];           // 평균 계산(score[0] ~ score[4] 까지 합계산)
	}
	avg = total / 5.0;

	for (i = 0; i < 5; i++) 
	{
		printf("%3d", score[i]);
	}

	printf("\n");

	printf("평균 : %.1lf\n", avg);   // 평균 출력

	return 0;
}