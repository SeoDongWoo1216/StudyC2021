/*
#pragma 지시자는 컴파일러의 컴파일 방법으 세부적으로 제어할때 사용한다.
pack은 구조체의 패딩바이트 크기 결정
warning은 경고 메세지를 관리
*/

// pragma를 사용한 바이트 얼라이먼트 변경

#include<stdio.h>
#pragma pack(push, 1)          // 바이트 얼라인먼트를 1로 바꿈
typedef struct 
{
	char ch;
	int in;
} Sample1;

#pragma pack(pop)              // 바꾸기 전의 바이트 얼라인먼트 적용
typedef struct 
{
	char ch;
	int in;
}Sample2;

int main() 
{
	printf("Sample1 구조체의 크기 : %d바이트\n", sizeof(Sample1));
	printf("Sample2 구조체의 크기 : %d바이트\n", sizeof(Sample2));
	return 0;
}
