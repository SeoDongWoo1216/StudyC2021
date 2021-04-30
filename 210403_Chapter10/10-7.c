#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void input_ary(double* pa, int size);
double find_max(double* pa, int size);

int main() 
{
	double ary[5];
	double max;
	int size = sizeof(ary) / sizeof(ary[0]);

	input_ary(ary, size);
	max = find_max(ary, size);
	printf("배열의 최대값 : %.1lf\n", max);

	return 0;
}

void input_ary(double* pa, int size) 
{
	int i;

	printf("%d개의 실수값 입력 : ", size);
	for (i = 0; i < size; i++) 
	{
		scanf("%lf", pa + i);    // &pa[i]도 가능, 입력한 배열 요소의 주소를 전달
	}
}

double find_max(double* pa, int size) 
{
	// 최대값을 찾는 알고리즘 
	// : for문을통해 처음값과 다음값을 비교하고 만약 다음값이 더 크면 처음값을 넣어줌
	// 다음값과 다다음값을 비교하고 다다음값을 넣고... 반복
	double max;
	int i;

	max = pa[0];                   // 첫번째 배열 값을 최댓값으로 설정
	for (i = 1; i < size; i++)     // 두번째 배열 값부터 max와 비교
							       // i=0으로했을때 굳이 지자신과 비교할필요가 없기때문)
	{
		if (pa[i] > max) max = pa[i];  // 새로운 배열 요소의 값이 max보다 크면 대입해준다.
	}

	return max;                    // 최대값을 반환
}