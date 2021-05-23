#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char ch1, ch2;

	scanf("%c%c", &ch1, &ch2);  // 2개의 문자를 연속 입력

	printf("[%c%c]\n", ch1, ch2);
	printf("%d, %d\n", ch1, ch2);
	
	//int a, b;
	//scanf("%d %d", &a, &b);   // 이때 공백은 입력받는 a, b를 구분하는 용도로 사용.
	//printf("%d %d", a, b);

	return 0;
}

/*
문자를 2개입력하는데 경우의 수
1. as  처럼 2개의 문자를 같이 입력해서 엔터치는경우     => [as]출력
2. a s 처럼 1개 입력하고  띄어쓰기하고 1개 입력하는경우 => [a' ']출력
3. a 입력하고 엔터 입력하는 경우						=> [a    출력
*/

// 스페이스바와 엔터도 아스키코드값이있기때문에 문자로 처리하는 것을 기억하자.
