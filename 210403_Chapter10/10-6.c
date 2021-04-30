#include <stdio.h>

void print_ary(int*, int);   // 매개변수가 2개인 함수 선언

int main() 
{
	// 각각 5, 7개의 요소를 가지는 배열 선언
	int ary1[5] = { 10, 20, 30, 40, 50 };   
	int ary2[7] = { 10, 20, 30, 40, 50, 60, 70 };  

	print_ary(ary1, sizeof(ary1) / sizeof(ary1[0]));
	printf("\n");
	print_ary(ary2, sizeof(ary2) / sizeof(ary2[0]));

	return 0;
}

// 첫번째 매개변수는 배열이름으로 받으니 포인터로 받아야한다.
void print_ary(int* pa, int size) // 배열명과 배열 요소의 개수를 받는 매개변수 선언
{
	int i;

	for (i = 0; i < size; i++)    // size값에따라 반복 횟수 결정
	{
		printf("%d ", pa[i]);
	}
}