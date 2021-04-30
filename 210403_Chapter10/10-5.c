#include <stdio.h>

void print_ary(int*);        // 함수 선언

int main() 
{
	int ary[5] = { 10, 20, 30, 40, 50 };

	print_ary(ary);          // 배열명을 주고 함수 호출

	return 0;
}

// 배열명을 줬으면 함수의 매개변수는 포인터나 배열로 받아야한다
void print_ary(int* pa)        
{
	int i;

	for (i = 0; i < 5; i++) 
	{
		printf("%d ", pa[i]);  // 배열의 요소 출력
	}
}