/*
열거형
변수에 저장할 수 있는 정수 값을 기호로 정의하여 나열한다.
1씩증가하는 연속된 시그널이 필요할때 enum을 사용함.
정수를 쓰는것보다 case SPRING: 처럼 문자열을 사용해주면 사용자입장에서 가독성을 높여줄 수 있다.

사용자 정의 함수(헷갈리면 구조체나 열심히)
구조체, 공용체, 열거형
(struct, union, enum)
*/

#include<stdio.h>

enum season { SPRING, SUMMER, FALL, WINTER };

int main()
{
	enum season ss;     // 열거형 변수 선언
	char* pc = NULL;    // 문자열을 저장할 포인터

	// ss = SPRING;     // 열거 멤버의 값 대입(실제로는 정수가 들어감)
	ss = SUMMER;

	switch (ss)         // 열거 멤버 판단
	{
		case SPRING:
			pc = "inline";
			break;
		case SUMMER:
			pc = "swimming";
			break;
		case FALL:
			pc = "trip";
			break;
		case WINTER:
			pc = "skiing";
			break;
	}
	printf("나의 레저 활동 => %s\n", pc);  // 선택된 문자열 출력


	enum season s3;
	printf("%dByte\n", sizeof(s3));        // enum의 크기 출력(4바이트로 고정되있음)
	printf("%d %d %d %d", SPRING, SUMMER, FALL, WINTER);  // enum 요소 값 출력(별도로 초기화안해주면 0,1,2,3 으로 정수화가 된다)
	                                                      // 위의 enum season에서 FALL = 100으로 초기화하면 0, 1, 100, 101로 출력됨.
	return 0;
}