/*
프로그램을 여러 개의 파일로 나누면 각 파일들이 전역 변수를 공유하기가 쉽지않다.
컴파일러는 소스파일 단위로 컴파일하므로 다른 파일에 선언된 전역변수를 알기 어렵기 때문.

다른 파일에 선언된 전역변수를 사용할때는 extern 선언
다른 파일에서 전역변수를 공유하지 못하게 할때는 static을 사용
*/

#include <stdio.h>

int input_data(void);     // 양수를 입력하고 그 합을 반환 
double average(void);     // 평균을 구하는 함수
void print_data(double);  // 출력 함수

int count = 0;            // 입력한 양수의 수 누적
static int total = 0;     // 입력한 양수의 합 (static은 다른 파일에서는 쓰지말라는거임)

int main() 
{
	double avg;            // 입력한 양수의 평균
	 
	total = input_data();  // 양수를 입력하고 그 합을 반환
	avg = average();       // 평균계산
	print_data(avg);

	return 0;
}

void print_data(double avg) 
{
	printf(" 입력한 양수의 개수 : %d\n", count);
	printf(" 전체 합과 평균 : %d, %.1lf\n", total, avg);
}