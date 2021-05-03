#include <stdio.h>


// 알파벳의 대소문자 변환 원리
// a(97) - A(65)를 뺀 32를 더하고빼서 대소문자를 변환이 가능하다.
int main(void) 
{
	char small;
	char cap = 'G';					        // char형 변수 선언과 초기화

	if ((cap >= 'A') && (cap <= 'Z'))	    // 만약 문자열이 대문자범위라면(아스키코드값 A(65) ~ Z(90) 사이라면)
	{
		small = cap + ('a' - '65');			// 대/소문자의 차이를 더해 소문자로 변환 
											// (cap의 아스키코드값) + (a(97) - A(65)) 값을 뺀 32의 값이 저장됨.
	}

	printf("대문자 : %c %c", cap, '\n');    // '\n'를 %c로 출력하면 줄이 바뀜.
	printf("소문자 : %c", small);

	return 0;
}