/*
1. 5명 학생의 국어, 영어, 수학, 체육 점수를 입력받는다.(2차원배열 사용)
2. 개인별 총점과 평균을 구한다.
3. 그리고 과목별의 총점과 평균도 구하시오
//int inputAry[5][4] = { {40,40,40,40},{50,50,50,50},{60,60,60,60}, {70,70,70,70}, {80,80,80,80 } };
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

// 개인별 함수
// 과목별 함수

void StudentScore();
void SubjectScore();

int main()
{
	int inputAry[5][4];

	// 2차원배열의 가로, 세로 길이 구하기
	int col = sizeof(inputAry[0]) / sizeof(inputAry[0][0]);  // 4
	int row = sizeof(inputAry) / sizeof(inputAry[0]);        // 5
	printf("가로 : %d\n", col);
	printf("세로 : %d\n\n", row);

	// 과목 점수 입력
	for (int i = 0; i < row; i++)
	{
		printf("%d번 학생의 과목 점수 입력(ex. 10 10 10 10) : ", i + 1);
		for (int j = 0; j < col; j++)
		{
			scanf("%d", &inputAry[i][j]);
		}
	}
	printf("\n");
	
	printf("-----------------------학생 총점, 평균-----------------------\n");
	StudentScore(inputAry, col, row);											// 학생들의 총점, 평균구하기
	printf("-------------------------------------------------------------\n");
	
	printf("\n");

	printf("-----------------------과목 총점, 평균-----------------------\n");
	SubjectScore(inputAry, col, row);											// 과목 총점, 평균구하기
	printf("-------------------------------------------------------------\n");

}


// 학생 총점, 평균 구하는 함수
void StudentScore(int (*piAry)[4], int col, int row) 
{
	for (int i = 0; i < row; i++)
	{
		int total = 0;
		double avg = 0;
		for (int j = 0; j < col; j++)
		{
			total += piAry[i][j];
		}
		avg = total / col;
		printf("%d번 학생의 총점 : %d, 평균 : %.2lf\n", i + 1, total, avg);
	}
}


// 과목 총점, 평균 구하는 함수
void SubjectScore(int (*piAry)[4], int col, int row)
{
	char subject[4][4] = { "Lan", "Eng", "Mat", "Ath" };

	for (int i = 0; i < col; i++)
	{
		int total = 0;
		double avg = 0;
		
		for (int j = 0; j < row; j++)
		{
			total += piAry[j][i];
			if (j == 4) 
			{
				break;
			}
			else 
			{
				printf("%c", subject[i][j]);
			}
		}
		avg = total / row;
		
		printf(" 과목의 총점 : %d, 평균 : %.2lf\n", total, avg);

		// printf("%d번 과목의 총점 : %d, 평균 : %.2lf\n", i + 1, total, avg);  // 1,2,3,4 과목으로했을때 출력문
	}
}