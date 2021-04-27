#include <stdio.h>

int main() 
{
	// 제어문자의 기능을 구별하기위해 ''를 넣어줬음
	printf("Be happy\n");
	printf("12345678901234567890\n");
	printf("My'\t'friend\n");
	printf("Goot\bd'\t'chance\n");   // \b때문에 Goot가 Good으로 출력됨 
	printf("Cow\rW\a\n"); // \r에 의해 Cow가 Wow로 출력

	/* 
	제어문자(이스케이프 시퀀스) 
	: 문자는 아니지만 출력방식에 영향을 주는 문자
	
	\n : 개행(엔터처리)
	\t : 들여쓰기(Tab처리)
	\b : 백스페이스처리
	\r : 맨 앞으로 이동
	\a : 벨소리(alart) 호출
	*/

	return 0;
}