/*
대 소문자 구분없이 알파벳을 입력하면 대 소문자를 판별하여 분류하고,
사전 순으로 정렬하여 출력하는 프로그램

입력받을 배열 : input_ary
배열의 크기는 10

정렬 알고리즘은 삽입정렬을 사용

삽입정렬 알고리즘은 함수로 구현

소문자 저장 배열이름은 lower_ary
대문자 저장 배열이름은 upper_ary

*연결리스트를 사용할 경우
입력받을 배열의 이름은 input_ary
배열의 크기는 10으로 정함
정렬알고리즘은 삽입정렬 사용
*/

/*
문자열을 배열로 입력받음
각각 받은 배열들이 대소문자인지 구별(이때 대문자배열, 소문자배열에 저장)
각각 배열을 삽입정렬로 정렬
출력
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
	char ary[6];
	char lower_ary[6];
	char upper_ary[6];
	for (int i = 0; i < sizeof(ary) / sizeof(ary[0]); i++) 
	{
		scanf(" %c", &ary[i]);  // 한칸 띄워서해야 배열요소에 딱맞는 개수가 입력됨
	}

	for (int i = 0; i < sizeof(ary) / sizeof(ary[0]); i++) 
	{
		printf("%c\n", ary[i]);
	}
	return 0;
}