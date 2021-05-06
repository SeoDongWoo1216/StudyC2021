/*
1. 5명 학생의 국어, 영어, 수학, 체육 점수를 입력받는다.(2차원배열 사용)
2. 개인별 총점과 평균을 구한다.
3. 그리고 과목별의 총점과 평균도 구하시오
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//int inputAry[5][4] = { {40,40,40,40},{50,50,50,50},{60,60,60,60}, {70,70,70,70}, {80,80,80,80 } };

int main() 
{
	int inputAry[5][4];

	// 2차원배열의 가로, 세로 길이 구하기
	int col = sizeof(inputAry[0]) / sizeof(inputAry[0][0]);  // 4
	int row = sizeof(inputAry) / sizeof(inputAry[0]);        // 5
	printf("가로 : %d\n", col);
	printf("세로 : %d\n\n", row);
	
	for (int i = 0; i < row; i++) 
	{
		printf("%d번 학생의 과목 점수 입력(ex. 10 10 10 10) : ", i + 1);
		for (int j = 0; j < col; j++) 
		{
			scanf("%d", &inputAry[i][j]);
		}
	}
	printf("\n");


	// 학생들의 총점, 평균구하기
	printf("-----------------------학생 총점, 평균-----------------------\n");
	for (int i = 0; i < row; i++)
	{
		int total = 0;
		double avg = 0;
		for (int j = 0; j < col; j++)
		{
			total += inputAry[i][j];
		}
		avg = total / col;

		printf("%d번 학생의 총점 : %d, 평균 : %.2lf\n", i + 1, total, avg);
	}
	printf("-------------------------------------------------------------\n");
	printf("\n");


	// 과목 총점, 평균구하기
	printf("-----------------------과목 총점, 평균-----------------------\n");
	for (int i = 0; i < col; i++) 
	{
		int total = 0;
		double avg = 0;
		for (int j = 0; j < row; j++) 
		{
			total += inputAry[j][i];
		}
		avg = total / row;
		printf("%d번 과목의 총점 : %d, 평균 : %.2lf\n", i+1, total, avg);
	}
	printf("-------------------------------------------------------------\n");

	


}
