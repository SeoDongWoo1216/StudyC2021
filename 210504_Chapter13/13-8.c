/*
지역변수는 주소값으로 리턴시키면 안된다
*/
 
#include<stdio.h>

int* sum(int a, int b);	 // int형 변수의 주소를 반환하는 함수 선언

int main() 
{
	int* resp;			 // 반환값을 저장할 포인터 resp(result pointer)

	resp = sum(10, 20);  // 반환된 주소는 resp에 저장
	printf("두 정수의 합 : %d\n", *resp);    // resp가 가리키는 변수의 값 출력
}

int* sum(int a, int b)   // int형 변수의 주소를 반환하는 함수
{
	//static int res;		 // 정적 지역 변수
	int res;

	res = a + b;		 // 두 정수의 합을 res(result)에 저장

	return &res;		 // 정적 지역 변수의 주소 변환
}

// 지역변수의 값을 반환하려면 static으로 선언해야한다.
/*
반환값의 자료형은 반환값을 저장할 포인터의 자료형과 같아야한다.
지역 변수의 주소를 반환해서는 안된다. => 정적 지역변수의 주소를 사용해야한다.
*/

