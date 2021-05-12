/*
이미 정의된 매크로
이미 정의가되어있어서 사용자가 취소하거나 바꿀 수 없는 매크로이다.
__FILE__ : 전체 디렉터리 경로를 포함한 파일명
__FUNCTION__ : 매크로명이 사용된 함수이름
__LINE__ : 매크로명이 사용된 행 번호
__DATE__ : 컴파일을 시작한 날짜
__TIME__ : 컴파일을 시작한 시간
*/

#include<stdio.h>

void func(void);

int main() 
{
	printf("컴파일 날짜와 시간 : %s, %s\n\n", __DATE__, __TIME__);
	printf("파일명 : %s\n", __FILE__);
	printf("함수명 : %s\n", __FUNCTION__);
	printf("행번호 : %d\n", __LINE__);

#line 100 "macro.c"  // 행 번호를 100부터 시작하고 파일명은 macro.c로 표시
	func();          // 여기서부터 행 번호는 100부터 시작

	return 0;
}

void func(void) 
{
	printf("\n");
	printf("파일명 : %s\n", __FILE__);
	printf("함수명 : %s\n", __FUNCTION__);
	printf("행번호 : %d\n", __LINE__);
}