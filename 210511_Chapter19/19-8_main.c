
/*
분할 컴파일
하나의 프로그램을 여러 개의 파일로 나누어 작성

두 정수의 평균을 구하는 프로그램
1. main은 함수를 호출해서 값을 줌
2. sub은 함수를 만들어서 값을 return
*/

#include <stdio.h>

void input_data(int*, int*);   // 두 정수를 입력하는 함수
double average(int, int);      // 평균을 구하는 함수

int main() 
{
	int a, b;
	int result;

	input_data(&a, &b);        // 두 정수 입력
	result = average(a, b);    // 평균 계산
	printf("두 정수의 평균 : %d\n", result);   // 입력값과 평균 출력

	return 0;
}