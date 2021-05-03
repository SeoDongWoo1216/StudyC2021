#include <stdio.h>

void my_gets(char* str, int size);

int main() 
{
	char str[7];								// 문자열 저장

	my_gets(str, sizeof(str));					// 한 줄의 문자열을 입력하는 함수
	printf("입력한 문자열 : %s\n", str);

	return 0;
}

void my_gets(char* str, int size)				 // str은 char배열, size는 배열의 크기
{
	int ch;										 // getchar 함수의 반환값을 저장할 변수
	int i = 0;                                   // str 배열의 첨자

	ch = getchar();                              // 첫번째 문자 입력
	while ((ch != '\n') && (i < size - 1))		 // 배열의 크기만큼 입력 (ch값이 개행문자거나 사이즈 - 1이면 while문 빠져나감)
	{     
		str[i] = ch;             // 입력한 문자를 배열에 저장
		i++;                     // 인덱스(배열 요소) 증가
		ch = getchar();          // 새로운 문자입력
	}

	str[i] = '\0';               // 배열의 맨 끝에 입력한 문자열이 끝났음을 알리는 NULL 문자 저장
}