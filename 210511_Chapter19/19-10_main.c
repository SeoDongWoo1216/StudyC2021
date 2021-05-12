/*
헤더파일의 필요성과 중복 문제 해결 방법
조건부 컴파일 전처리 명령을 통해 중복 포함 문제를 해결할 수 있다.
*/

// 헤더파일의 중복포함 문제 해결방법
// Point와 Line 구조체 모두 사용

#include <stdio.h>
#include "19-10_point.h"
#include "19-10_line.h"

int main() 
{
	Line a = { {1,2},{5,6} };            // Line 구조체 변수 초기화
	Point b;                             // 가운데 점의 좌표 저장

	b.x = (a.first.x + a.second.x) / 2;  // 가운데 점의 x좌표 계산
	b.y = (a.first.y + a.second.y) / 2;  // 가운데 점의 y좌표 계산
	printf("선의 가운데 점의 좌표 : (%d, %d)\n", b.x, b.y);

	return 0;
}

/*
2개의 헤더 파일과 하나의 소스 파일로 분할 컴파일했는데, 
line.h 헤더 파일에 선언된 Line 구조체는 Point 구조체를 멤버로 쓰므로 Point 구조체가 선언된 point.h를 include한다.
*/