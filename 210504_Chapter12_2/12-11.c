/* 문자열 길이를 계산하는 strlen 함수
strlen(str);   // str은 크기를 확인할 배열명
배열의 저장된 문자열의 실제 길이를 알고 싶을때 strlen 함수를 사용한다.

sizeof 연산자와 strlen 함수의 차이?
sizeof는 방의 크기이기때문에 배열에 저장된 문자열 길이와는 상관없이 배열 전체 크기를 계산한다.
strlen은 문자 길이를 return 해준다.

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>							  // strlen 함수 사용을 위한 헤더파일

int main() 
{
	char str1[80], str2[80];				  // 두 문자열을 입력할 배열
	char* resp;								  // ★문자열이 긴 배열을 선택할 포인터★

	printf("2개의 과일 이름 입력 : ");		
	scanf("%s%s", str1, str2);				  // 2개의 문자열 입력
	if (strlen(str1) > strlen(str2))		  // 배열에 입력된 문자열의 길이 비교
	{
		resp = str1;						  // 첫번째 배열이 긴 경우 선택
	}
	else 
	{
		resp = str2;						  // 두번째 배열이 긴 경우 선택
	}
	printf("이름이 긴 과일은 : %s\n", resp);  // 문자열이 긴(if문을 통해 선택된) 배열을 출력
		

	return 0;
}