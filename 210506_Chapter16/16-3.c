/*
(456p~459p)
calloc  : 할당한 저장 공간을 0으로 초기화
realloc : 할당한 메모리공간을 늘리거나 줄일때 사용

calloc은 메모리를 동적으로 할당하여 0으로 초기화된 메모리 공간을 얻을때 사용.
void *calloc(unsigned int, unsigned int);

메모리 동적할당할때 데이터에 맞게 저장하지만, 예측한 크기가 너무 크거나 작을수있는데, 이때 realloc함수를 사용한다.
void *realloc(void*, unsigned int);
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int* pi;			// 할당한 저장 공간을 연결할 포인터
	int size = 5;		// 한 번에 할당할 저장 공간의 크기, int형 변수 5개씩
	int count = 0;		// 현재 입력된 양수 개수
	int num;			// 양수에 입력할 변수
	int i;				// 반복 제어 변수

	//int* pi_back;		// 메모리 누수를위해 백업할 주소를 받을 임시 변수

	pi = (int*)calloc(size, sizeof(int));	// 5개의 저장공간 할당
	while (1) 
	{
		printf("양수만 입력하세요 => ");
		scanf("%d", &num);

		if (num <= 0)						// 0 또는 음수일때 while문 종료
		{
			break;
		}

		if (count == size)					// 저장 공간을 모두 사용했을때
		{
			size += 5;						// ★크기를 늘려서 재 할당★  
											// NULL 포인터를 임시로 저장했던 주소값을 pi에 집어넣어야함.
											// 메모리 누수에대한 대비가 필요한 코드임.

			// pi_back = pi;					// 메모리 누수에 대비해서 임시로 백업한 주소값
								
			pi = (int*)realloc(pi, size * sizeof(int));	  // realloc을 통해 메모리공간 재할당

			//if (pi == NULL)					// NULL포인터일때 
			//{
			//	pi = pi_back;				// 백업한 주소를 pi에 대입시켜줌.
			//}
		}

		pi[count++] = num;
	}

	for (i = 0; i < count; i++)				// 데이터출력
	{
		printf("%5d", pi[i]);
	}
	free(pi);

	return 0;
}