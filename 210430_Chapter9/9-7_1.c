/*
	 a = 10  b = 20 으로 초기화
	 함수 만들기
	 이름 : swap, a와 b의 두 값을 바꾸는 기능
	 전역변수, 지역변수를 각각 선언해서 값의 변화를 관찰해보자.
 */
#include<stdio.h>

// 전역변수 선언 : 접근은 쉽지만 안전장치가없는 변수.(최대한 자용을 자제하자..)
int a = 10;
int b = 20;

void Swap(int, int);    // 전역변수일때 사용할 함수
// void Swap(int, int); // 지역변수일때 사용할 함수

int main() 
{
	// 지역변수 선언
	// int a = 10;
	// int b = 20;
	printf("바꾸기전 a, b : %d, %d\n", a, b);
	Swap(a, b);
	printf("바뀐 후  a, b : %d, %d\n", a, b);
}


// 전역변수를 사용했을때는 Swap이 가능.
// 근데 전역변수를 사용하는것은 옳지않음..
// 아무나 건드릴수있어서 값이 변경되는 경우가 비일비재하다.
// 따라서 내가 원하는 결과를 얻기가 힘들기때문에
// 전역변수 사용을 자제해야한다.
void Swap() 
{
	int temp;
	temp = a;
	a = b; 
	b = temp;
}




// x, y를 a, b 로 복사해서 x, y로 사용
// 값을 바꿨더라도 Swap 함수 내에서만 값이 바뀐거임
//void Swap(int x, int y)
//{
//	int temp = 0;
//	temp = x;
//	x = y;
//	y = temp;
//	// printf("바뀐 후  a, b : %d, %d\n", x, y);
//}