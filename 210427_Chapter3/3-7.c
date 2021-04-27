#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> // 문자열을 다루기위해 string.h 헤더 파일 선언


int main() 
{
	char fruit[20] = "strawberry";  // 문자 배열을 strawberry로 초기화
	 
	printf("%s\n", fruit);          // strawberry 출력
	strcpy(fruit, "banana");        // fruit에 banana 복사
	printf("%s\n", fruit);

	// strcpy는 string copy의 줄임말로, 문자열을 복사함.

	return 0;
}