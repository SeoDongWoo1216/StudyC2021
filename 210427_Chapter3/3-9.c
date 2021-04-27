#define _CRT_SECURE_NO_WARNINGS  // 전처리언어(scanf가 보안문제때문에 위험한데 무시하겠다는 뜻)
#include<stdio.h>

int main() 
{
	/*
	키보드로 입력받는 함수 : scanf()
	&는 주소를 나타낸다.
	scanf는 항상 주소연산자 &a를 붙여줘야함.
	*/

	int a;

	printf("정수 1개를 입력하세요 : ");
	scanf_s("%d", &a);               // 변수 a에 키보드로 값 입력
	printf("입력된 값 : %d\n", a); // 입력한 값 출력

	return 0;
}