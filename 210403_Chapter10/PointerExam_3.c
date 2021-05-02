#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
    // Swap 함수매개변수는 배열로받고, 함수 안에서 포인터 선언하여 값을 바꿔줌
	date : 2021-04-30
	Author : 서동우
	description :
	1. 10개의 정수를 입력받아 배열에 저장한다.
	2. 배열을 출력한다.
	3. 배열에 저장된 값을
	ary[9] <-> ary[0]
	ary[8] <-> ary[1]
	ary[7] <-> ary[2]
	ary[6] <-> ary[3]  식으로 저장된 값을 교환한다.
	(방법 : 포인터 2개를 사용하여 0번방, 9번방을 가리킨다.)

	4. 데이터를 교환한 배열을 출력한다.
	5. 함수이름
	input_ary();
	swap_ary();
	print_ary();
*/

void input_ary(int*, int);
void swap_ary(int*, int);
void print_ary(int*, int);

int main()
{
	int iAry[10];
	int size = sizeof(iAry) / sizeof(iAry[0]);
	
	input_ary(iAry, size);
	print_ary(iAry, size);

	printf("\n");

	swap_ary(iAry, size);
	print_ary(iAry, size);
}

void input_ary(int* piAry, int size)
{
	int i;  // for문용 변수
	printf("10개의 정수 배열 입력 : ");
	for (i = 0; i < size; i++)
	{
		scanf("%d", piAry + i);
	}
}

void swap_ary(int* piAry, int size)
{
	int i;  // for문용 변수
	int temp = 0;

	int* pa = (piAry + 0);
	int* pb = (piAry + size - 1);

	for (i = 0; i < size / 2; i++)
	{
		temp = *pa;
		*pa = *pb;
		*pb = temp;
		pa++;
		pb--;
	}
}

void print_ary(int* piAry, int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		printf("%d ", piAry[i]);
	}
}