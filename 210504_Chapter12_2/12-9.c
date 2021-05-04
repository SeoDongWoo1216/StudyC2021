/*
원하는 개수의 문자를 복사하는 strncpy 함수 : 실질적으로 건드릴 수 있는 메모리 영역만 사용할때
strncpy(복사받을 배열명, 복사할 문자열, 복사할 문자수)

주의!! 예제에는 apple tree에서 apple만 바껴서 상관없었는데, apple만 쓰이도록할때는
apple을 복사한 후에 널 문자를 별도로 저장해야한다.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() 
{
	char str[20] = "mango tree";    // 배열 초기화

	strncpy(str, "apple-pie", 5);   // "apple-pie"에서 다섯 문자만 복사("apple" 이 복사됨)
	// str[5] = '\0';					// 널문자(\0)를 넣어주면 apple까지 출력된다.
	printf("%s\n", str);            // "mango tree" -> "apple tree" 출력

	return 0;
}