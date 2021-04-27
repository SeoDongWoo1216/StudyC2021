#include <stdio.h>

int main(void) 
{
	// 10진수 출력
	printf("%d\n", 12);     // 10진수 정수 출력
	printf("%d\n", 014);    // 8진수 정수 출력
	printf("%d\n\n", 0xc);  // 16진수 정수 출력

	// 8진수, 16진수 출력
	printf("%o\n", 12);    // 8진수 출력 : 14
	printf("%x\n", 014);   // 16진수 소문자 출력 : c
	printf("%X\n", 0xc);   // 16진수 대문자 출력 : C

	return 0;
}