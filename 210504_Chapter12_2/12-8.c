// 더하기 연산은 문자열에는 성립하지않는다.
// 문자열은 상수이기때문
// 문자열초기화를 제외하고 하나하나씩 넣을때는 널문자도 직접 초기화해줘야함.

/*
#include <string.h>  // 문자열을 사용하는 함수를가진 헤더파일
strcpy(stringcopy 함수)
strcpy(복사받을 곳, 복사할 내용);   // strcpy 함수의 사용법
첫번째 인수 : 복사받을 곳의 배열명
두번째 인수 : 복사할 문자열
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>							// strcpy 함수를 사용하기위한 헤더파일

int main() 
{
	char str1[80] = "strawberry";			// char 배열에 문자열 초기화
	char str2[80] = "apple";				// char 배열에 문자열 초기화

	char* ps1 = "banana";					// 포인터로 문자열 상수 연결
	char* ps2 = str2;						// 포인터로 배열 연결

	printf("최초 문자열 : %s\n", str1);
	strcpy(str1, str2);						// 다른 char 배열의 문자열 복사
	printf("바뀐 문자열 : %s\n", str1);

	strcpy(str1, ps1);						// 문자열 상수를 연결한 포인터 사용
	printf("바뀐 문자열 : %s\n", str1);

	strcpy(str1, ps2);						// 배열을 연결한 포인터 사용(배열이와도됨)
	printf("바뀐 문자열 : %s\n", str1);

	strcpy(str1, "banana");
	printf("바뀐 문자열 : %s\n", str1);

	return 0;
}

