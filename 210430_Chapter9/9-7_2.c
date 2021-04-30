// 9-7_1 과는 다르게 Swap 함수에 a, b의 주소값을 던져주자.


#include<stdio.h>

void Swap(int, int);

int main() 
{
	int a = 10;
	int b = 20;
	int temp = 0;
	printf("바꾸기전 a, b : %d, %d\n", a, b);
	Swap(&a, &b);
	printf("바뀐 후  a, b : %d, %d\n", a, b);

	return 0;
}

void Swap(int *x, int *y) 
{
	// 2개의 값을 바꿀때 쓰는 알고리즘
	// 임시로 temp를 선언해서 값을 왔다갔다시켜서 값을 바꾸는 원리
	int temp = 0;
	temp = *x;   // *x 데이터를 temp에 저장(일반 변수처럼 쓰는거임)
	*x = *y;     // *y 데이터를 *x에 저장
	*y = temp;
}