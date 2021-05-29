/*  문자열을 붙이는 strcat, strncat 함수

strcpy함수는 초기화된 문자열을 지우고 새로운 문자열로 바꿀때 사용한다.
반면에 배열에 있는 문자열 뒤에 이어 붙일때는 strcat 또는 strncat 함수를 사용한다. 일종의 더하기 연산이다.

strcat는 문자열을 이어붙이고,
strncat는 지정한 문자의 개수만큼 붙인다.


주의! 
1. strcat 함수는 메모리를 침범할 수 있다.=> 배열의 크기를 충분히 할당해줘야함
2. strcat함수를 사용할때는 배열을 초기화해야한다. => 붙여넣기전에 널문자 위치를 찾으므로 반드시 초기화해주어야한다.
초기화하지않으면 쓰레기 값의 중간부터 붙여넣을 가능성이 크다.

char str[80] = {'\0'}; // 명시적으로 널문자 초기화
char str[80] = {0};    // 널 문자의 아스키코드값으로 초기화
char str[80] = "";     // 큰따옴표 안에 아무것도 없으므로 널문자만 초기화
char str[80] = '\0';   // 첫번째 배열 요소만 별도로 초기화
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() 
{
	char str[80] = "straw";

	strcat(str, "berry");			// str 배열에 문자열 붙이기
	printf("%s\n", str);

	strncat(str, "piece", 3);		// str 배열에 3개의 문자 붙이기
	printf("%s\n", str);

	return 0;
}