// 입력문자의 아스키 코드 값을 출력하는 프로그램

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
	int res;
	char ch;
	printf("문자열 아무거나 입력(컨트롤 Z + 엔터 + 컨트롤 Z 누르면 종료)\n");
	while (1) 
	{
		res = scanf("%c", &ch);
		if (res == EOF)
		{
			printf("종료합니다\n");
			break;					// 반환값이 -1이면 종료
		}
		printf("%d ", ch);          // 결과값에 10이 계속 딸려오는데, 엔터(개행)의 아스키코드가 10임.
	}

	return 0;
}
// scanf는 입력한 개수를 반환
// 문자를 제대로 입력하면 1을 반환, 컨트롤Z를 누르면 -1를 반환

/*
EOF : End Of File
res == -1 대신에 res == EOF 를 입력하면 동일한 결과가 나온다.
stdio.h 헤더파일에 EOF라는 이름을 바꾸는 전처리 지시자가 있으므로 -1 대신 EOF를 사용하면 좀 더 읽기 쉬운 코드를 작성할 수 있다.
*/