/*
malloc : 동적할당을해줌
같이 기억해야하는 함수가 free()

힙영역의 데이터는 프로그램이 종료될때까지 계속 존재하므로 free()를 통해 주소값을 반환해야한다.

배열처럼 연속적으로 사용가능.
*/

// 동적 할당 영역을 배열처럼 사용
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>

int main() 
{
	int* pi;									// 동적 할당 영역을 연결할 포인터
	int i, sum = 0;								// 반복 제어 변수와 누적 변수

	pi = (int*)malloc(5 * sizeof(int));			// 저장공간 20 바이트 할당
	if (pi == NULL)								// 주소 할당을 안받았을때(예외처리구문)
	{
		printf("메모리가 부족합니다!\n");
		exit(1);
	}

	printf("다섯 명의 나이를 입력하세요 : ");
	for (i = 0; i < 5; i++) 
	{
		scanf("%d", &pi[i]);					// 배열 요소에 입력
		sum += pi[i];							// 배열 요소의 값 누적
	}
	printf("다섯 명의 평균 나이 : %.1lf\n", (sum / 5.0));  // 평균 나이 출력
	free(pi);    // 할당한 메모리 영역 반환


	return 0;
}