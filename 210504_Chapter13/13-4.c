/*
정적 지역 변수(static variable)
코드 블록안에 선언하므로 일반 지역 변수와 같이 사용 범위가 블록내부로 제한된다.
지역변수와 전역변수의 2가지 특징을 가지고있는 변수.
그러나, 저장 공간이 메모리에 존재하는 기간이 다르다.

정적 지역 변수는 선언된 함수가 반환되더라도 그 저장 공간은 계속 유지한다.
따라서 하나의 함수가 여러번 호출되는 경우 같은 변수를 공유하는 것이 가능하다.


지역변수는 함수가 호출될때 메모리에 할당되고 반환될때 메모리에서 제거된다.
정적지역변수는 저장공간이 할당되어 유지하는 시점이 함수 호출과는 무관하다.(프로그램 시작될때 할당되며, 프로그램이 종료될때 존재한다)

일반 지역 변수와 정적 지역 변수의 차이를 예제를 통해 알아보자.
*/

#include <stdio.h>

void auto_func(void);
void static_func(void);

int main() 
{
	int i;

	printf("일반 지역 변수(auto)를 사용한 함수...\n");
	for (i = 0; i < 3; i++) 
	{
		auto_func();
	}

	printf("정적 지역 변수(static)를 사용한 함수...\n");
	for (i = 0; i < 3; i++) 
	{
		static_func();
	}

	return 0;
}

void auto_func(void) 
{
	auto int a = 0;		   // 지역 변수 선언과 초기화 (printf로 호출하면 함수가 끝나므로 메모리에서 없어지므로 계속 1만 출력됨)
						   // 지금까지 사용했던 지역변수에는 auto가 생략되어있다.

	a++;				   // a값 1 증가
	printf("%d\n", a);	   // a 출력
}

void static_func(void) 
{
	static int a;		   // 정적 지역 변수 선언 (printf로 호출하면 함수가 끝나고 메모리에 계속 남아있으므로 1, 2, 3이 호출된다)

	a++;				   // a값 1 증가
	printf("%d\n", a);     // a 출력
}