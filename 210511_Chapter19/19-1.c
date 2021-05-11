/*
< > 를 사용하면 C컴파일러가 표준 라이브러리 함수가 포함된 헤더 파일을 include 디렉터리에서 제공한다.
" " 를 사용하면 사용자가 만든 헤더 파일을 의미한다. 컴파일러가 소스파일이 있는 곳에서 헤더파일을 찾는다.
디렉터리 파일도 포함할 수 있는데, 경로를 포함한 파일명을 기재하여 사용할 수 있다.

*/

// 내가만든거는 #include "프로젝트이름.h" 으로 해주어야함.

// 파일을 포함하는 #include
#include <stdio.h>
#include "19-1_student.h"


int main() 
{
	Student a = { 315, "홍길동" };                    // 구조체 변수 선언과 초기화

	printf("학번 : %d, 이름 : %s\n", a.num, a.name);  // 구조체 멤버 출력

	return 0;
}