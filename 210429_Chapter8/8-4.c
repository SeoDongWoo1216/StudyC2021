#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
	char str[80] = "applejam";              // char 80개 배열선언(80바이트)과 초기화

	printf("최초 문자열 : %s\n", str);      // 초기화 문자열 출력(문자열이라 %s 사용)
	printf("문자열 입력 : ");
	scanf("%s", str);                       // 문자열을 scanf를 통해 키보드로 입력받음
											// scanf함수가 문자열 이외의 방을 null문자를 자동으로 입력해줌.
	                               
	printf("입력 후 문자열 : %s\n", str);   // 입력된 문자열 출력
	
	return 0;
}