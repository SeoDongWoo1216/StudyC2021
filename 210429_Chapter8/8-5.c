// 문자열을 복사해주는 strcpy 함수

#define _CRT_SECURE_NO_WANINGS
#include <stdio.h>   // 문자열 관련 함수 원형을 모아놓은 헤더파일

int main() 
{
	char str1[80] = "cat";
	char str2[80];

	strcpy(str1, "tiger");           // str1 파일에 "tiger" 복사
	strcpy(str2, str1);              // str2 배열에 str1 배열의 문자열 복사

	printf("%s, %s\n", str1, str2);

	return 0;
}