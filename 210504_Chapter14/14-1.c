/*
다차원배열에서 가장 중요한것은 열이다. (행은 그닥)
배열을 다룰때 for문을 사용했는데, 2차원배열이면 2중for문을 사용.

int score[행의 수][열의 수]

*/

// 학생 3명의 4과목 총점과 평균을 구하는 프로그램
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() 
{
	int score[3][4];					  // 3명의 네과목 점수를 저장할 2차원 배열 선언
	int total;							  // 총점
	double avg;							  // 평균
	int i, j;							  // 반복 제어 변수

	for (i = 0; i < 3; i++)				  // 행 제어
	{
		printf("4과목의 점수 입력 : "); 
		for (j = 0; j < 4; j++)			  // 과목 수(열 제어) 만큼 반복
		{
			scanf("%d", &score[i][j]);	  // 점수 입력
		}
	}

	for (i = 0; i < 3; i++)				  // 학생 수 만큼 반복
	{
		total = 0;					      // 학생이 바뀔때마다 0으로 초기화
		for (j = 0; j < 4; j++)			  // 과목 수 만큼 반복
		{
			total += score[i][j];		  // 학생별로 총점 누적
		}
		avg = total / 4.0;				  // 평균 계산
		printf("총점 : %d, 평균 : %.2lf\n", total, avg);   // 총점, 평균 출력
	}

	return 0;
}