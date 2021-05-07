// 동적할당 영역의 문자열을 함수로 출력

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_str(char** ps);      // 동적 할당 영역의 문자열을 출력하는 함수(이중포인터)

int main() 
{
	char temp[80];				// 임시 char 배열
	char* str[21] = { 0 };		// 문자열을 연결할 ★포인터 배열★을 널 포인터로 초기화
								// 포인터배열 : 포인터2개(1차원 배열이지만 요소타입이 포인터)
								// 포인터배열은 입력으로 사용하려면 이중포인터로 사용해야한다.
	int i = 0;					

	while (i < 20) 
	{
		printf("문자열을 입력하세요 : ");
		gets(temp);							// 문자열 입력 gets는 띄어쓰기까지 저장이 가능
		if (strcmp(temp, "end") == 0)		// end가 입력되면 반복 종료(strcmp 는 문자열 비교함수 => 같을때 0반환)
		{
			break;
		}
		str[i] = (char*)malloc(strlen(temp) + 1);	// 문자열 저장 공간 할당 ( 맨뒤에 NULL문자를 넣기위해 문자열길이 + 1을 해줌)
		strcpy(str[i], temp);						// 동적 할당 영역에 문자열 복사
		i++;
	}
	print_str(str);							// 입력한 문자열 출력
	for (i = 0; str[i] != NULL; i++)		// str에 연결될 문자열이 없을때까지
	{
		free(str[i]);						// 동적 할당 영역 반환
	}
	return 0;
}


void print_str(char** ps)					// 이중포인터 연산(ps은 문자열의 주소값)
{
	while (*ps != NULL)						// 포인터 배열의 값이 널 포인터아니면 반복
	{
		printf("%s\n", *ps);				// ps가 가리키는 곳은 포인터배열의 요소임
		ps++;								// ++을 통해 ps가 다음 배열 요소를 가리킴
	}
}


/*
배열에 문자열 저장할때는 문자열길이가 제각각이라 문자열 배열의 길이를 넉넉하게 선언해야한다.
문자열 길이에 딱 맞는 메모리 공간을 사용할 수 있다. => 효율적으로 메모리 관리 가능

char *argv[] : 포인터배열(2중포인터)
char **argv : 2중포인터
*/